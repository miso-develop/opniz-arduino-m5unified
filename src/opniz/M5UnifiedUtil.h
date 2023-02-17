#ifndef OPNIZ_M5UNIFIED_UTIL_H
#define OPNIZ_M5UNIFIED_UTIL_H

#include <M5Unified.h>
#include <FastLED.h>
#include "../lib/LED_DisPlay/src/LED_DisPlay.h"

extern LED_DisPlay led;

enum LedPin {
    M5AtomMatrixLedPin = 27,
    M5AtomLiteLedPin = M5AtomMatrixLedPin,
    M5AtomEchoLedPin = M5AtomMatrixLedPin,
    M5AtomULedPin = M5AtomMatrixLedPin,
    M5AtomS3LiteLedPin = 35,
    M5StampS3LedPin = 21,
    M5StampPicoLedPin = 27,
    M5StampC3LedPin = 2,
    M5StampC3ULedPin = M5StampC3LedPin,
};

enum LedNum {
    M5AtomMatrixLedNum = 25,
    M5AtomLiteLedNum = 1,
    M5AtomEchoLedNum = 1,
    M5AtomULedNum = 1,
    M5AtomS3LiteLedNum = 1,
    M5StampS3LedNum = 1,
    M5StampPicoLedNum = 1,
    M5StampC3LedNum = 1,
    M5StampC3ULedNum = 1,
};



#if defined(M5ATOM_LED_ENABLE)&& !defined(M5ATOMS3_LITE_LED_ENABLE) && !defined(M5STAMP_S3_LED_ENABLE) && !defined(M5STAMP_PICO_LED_ENABLE)
    #define RGB_LED_CHIPSET WS2812
    #define RGB_LED_PIN     M5AtomMatrixLedPin
    #define RGB_LED_NUM     M5AtomMatrixLedNum
#elif !defined(M5ATOM_LED_ENABLE)&& defined(M5ATOMS3_LITE_LED_ENABLE) && !defined(M5STAMP_S3_LED_ENABLE) && !defined(M5STAMP_PICO_LED_ENABLE)
    #define RGB_LED_CHIPSET WS2812
    #define RGB_LED_PIN     M5AtomS3LiteLedPin
    #define RGB_LED_NUM     M5AtomS3LiteLedNum
#elif !defined(M5ATOM_LED_ENABLE)&& !defined(M5ATOMS3_LITE_LED_ENABLE) && defined(M5STAMP_S3_LED_ENABLE) && !defined(M5STAMP_PICO_LED_ENABLE)
    #define RGB_LED_CHIPSET WS2812
    #define RGB_LED_PIN     M5StampS3LedPin
    #define RGB_LED_NUM     M5StampS3LedNum
#elif !defined(M5ATOM_LED_ENABLE)&& !defined(M5ATOMS3_LITE_LED_ENABLE) && !defined(M5STAMP_S3_LED_ENABLE) && defined(M5STAMP_PICO_LED_ENABLE)
    #define RGB_LED_CHIPSET SK6812
    #define RGB_LED_PIN     M5StampPicoLedPin
    #define RGB_LED_NUM     M5StampPicoLedNum
#endif

#if defined(RGB_LED_CHIPSET) && defined(RGB_LED_PIN) && defined(RGB_LED_NUM)
    auto enableLed = []() { FastLED.addLeds<RGB_LED_CHIPSET, RGB_LED_PIN, GRB>(led.getLedBuff(), RGB_LED_NUM); };
#else
    auto enableLed = []() {};
#endif

auto initLed = []() {
    enableLed();
    led.begin();
    led.setTaskName("LEDs");
    led.setTaskPriority(2);
    led.setCore(1);
    led.start();
};

auto initM5 = []() {
    M5.begin();
    
    // MEMO: RGB LED搭載デバイス以外はinitLed()は余計だけどこれなしにNode.js SDK側でLEDメソッドを実行するとデバイスリブートが走る
    // TODO: RGB LED非搭載デバイスでは実行しないようにしたいので、FastLEDのinclude切り離しと合わせて対応したい
    initLed();
    
    Serial.println();
    delay(100);
};



auto int2crgb = [](uint32_t color) { return color & 0xffffff; };
auto str2crgb = [](String color) { return strtoll(&color[1], NULL, 16) & 0xffffff; };



auto blink = [](boolean state, long color) { led.fillpix(state ? color : 0); };
auto blinkRed = [](boolean state) { blink(state, 0x008800); };
auto blinkGreen = [](boolean state) { blink(state, 0x880000); };
auto blinkBlue = [](boolean state) { blink(state, 0x000088); };
auto blinkYellow = [](boolean state) { blink(state, 0x888800); };

auto blinkM5StickCLed = [](boolean state) {
    pinMode(10, OUTPUT);
    digitalWrite(10, state ? LOW : HIGH);
};

auto genBlinkDisplay = [](String ssid, String address, uint16_t port, String id = "") {
    return [ssid, address, port, id](boolean state) {
        if (!state) return M5.Display.clear();
        M5.Display.setCursor(0, 0);
        M5.Display.setTextSize(2);
        M5.Display.println();
        
        M5.Display.printf("  Wi-Fi SSID:\n    %s\n\n", ssid);
        M5.Display.printf("  opniz address:\n    %s\n\n", address);
        M5.Display.printf("  opniz port:\n    %d\n\n", port);
        M5.Display.printf("  opniz ID:\n    %s\n\n", id);
    };
};

auto genBlinkDisplayMin = [](String ssid, String address, uint16_t port, String id = "") {
    return [ssid, address, port, id](boolean state) {
        if (!state) return M5.Display.clear();
        M5.Display.setCursor(0, 0);
        M5.Display.setTextSize(2);
        M5.Display.println();
        
        M5.Display.println(ssid);
        M5.Display.println(address);
        M5.Display.println(port);
        M5.Display.println(id);
    };
};

auto genBlinkDisplayMinWide = [](String ssid, String address, uint16_t port, String id = "") {
    return [ssid, address, port, id](boolean state) {
        if (!state) return M5.Display.clear();
        M5.Display.setRotation(1);
        M5.Display.setCursor(0, 8);
        M5.Display.setTextSize(2);
        
        M5.Display.println(ssid);
        M5.Display.println(address);
        M5.Display.println(port);
        M5.Display.println(id);
    };
};

#endif
