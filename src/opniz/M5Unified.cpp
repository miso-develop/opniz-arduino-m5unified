#include "./M5Unified.h"

const String id = "___default___";
const Protocol protocol = WebSocket;

Opniz::M5Unified::M5Unified(const char* address, const uint16_t port) : Esp32(address, port, id, protocol) {
    _constructor();
}
Opniz::M5Unified::M5Unified(const char* address, const uint16_t port, const String id) : Esp32(address, port, id, protocol) {
    _constructor();
}
Opniz::M5Unified::M5Unified(const char* address, const uint16_t port, const Protocol protocol) : Esp32(address, port, id, protocol) {
    _constructor();
}
Opniz::M5Unified::M5Unified(const char* address, const uint16_t port, const String id, const Protocol protocol) : Esp32(address, port, id, protocol) {
    _constructor();
}

void Opniz::M5Unified::_constructor() {
    addHandler({
        new _getVersion______String_Handler,
        
        new _M5_begin___const_config_t___void_Handler,
        new _M5_config___const_config_t___config_t_void_Handler,
        new _M5_getBoard___void___board_t_Handler,
        new _M5_getUpdateMsec___void___std_uint32_t_Handler,
        new _M5_update___void___void_Handler,
        
        new _led_init______void_Handler,
        new _led_setBrightness___uint8_t___void_Handler,
        new _led_drawpix___uint8_t_uint8_t_CRGB_CRGB_undefined___void_Handler,
        new _led_fillpix___CRGB___void_Handler,
        new _led_clear______void_Handler,
        new _led_setWidthHeight___uint16_t_uint16_t___void_Handler,
        
        new _M5_Btn_setDebounceThresh___uint32_t___void,
        new _M5_Btn_setHoldThresh___uint32_t___void,
        new _M5_Btn_getDebounceThresh___void___uint32_t,
        new _M5_Btn_getHoldThresh___void___uint32_t,
        
        new _M5_Imu_begin______bool_Handler,
        new _M5_Imu_getAccel___float_float_float___bool_Handler,
        new _M5_Imu_getGyro___float_float_float___bool_Handler,
        new _M5_Imu_getTemp___float___bool_Handler,
        new _M5_Imu_isEnabled___void___bool_Handler,
        new _M5_Imu_getType___void___imu_t_Handler,
        new _M5_Imu_setRotation___uint_fast8_t___void_Handler,
        
        new _M5_Display_height___void___int32_t_Handler,
        new _M5_Display_width___void___int32_t_Handler,
        new _M5_Display_setRotation___uint_fast8_t___void_Handler,
        new _M5_Display_setCursor___int32_t_int32_t_uint8_t___void_Handler,
        new _M5_Display_color332___uint8_t_uint8_t_uint8_t___uint8_t_Handler,
        new _M5_Display_color565___uint8_t_uint8_t_uint8_t___uint16_t_Handler,
        new _M5_Display_color888___uint8_t_uint8_t_uint8_t___uint32_t_Handler,
        new _M5_Display_drawString___const_char_int32_t_int32_t_uint8_t___size_t_Handler,
        new _M5_Display_drawCentreString___const_String_int32_t_int32_t_uint8_t___size_t_Handler,
        new _M5_Display_drawRightString___const_String_int32_t_int32_t_uint8_t___size_t_Handler,
        new _M5_Display_print___const_char___size_t_Handler,
        new _M5_Display_println___const_char___size_t_Handler,
        new _M5_Display_fillScreen___const_T___void_Handler,
        new _M5_Display_clear___const_T___void_Handler,
        new _M5_Display_setTextColor___T1_T2___void_Handler,
        new _M5_Display_setTextDatum___uint8_t___void_Handler,
        new _M5_Display_setTextFont___int___void_Handler,
        new _M5_Display_setTextSize___float_float___void_Handler,
        new _M5_Display_setBrightness___uint8_t___void_Handler,
        new _M5_Display_getBrightness___void___uint8_t_Handler,
        new _M5_Display_sleep___void___void_Handler,
        new _M5_Display_wakeup___void___void_Handler,
        new _M5_Display_powerSave___bool___void_Handler,
        new _M5_Display_powerSaveOn___void___void_Handler,
        new _M5_Display_powerSaveOff___void___void_Handler,
        new _M5_Display_clearDisplay___int32_t___void_Handler,
        new _M5_Display_fontHeight___int8_t___int32_t_Handler,
        new _M5_Display_fontWidth___int8_t___int32_t_Handler,
        new _M5_Display_getBaseColor___void___uint32_t_Handler,
        new _M5_Display_getColorDepth___void___color_depth_t_Handler,
        new _M5_Display_getCursorX___void___int32_t_Handler,
        new _M5_Display_getCursorY___void___int32_t_Handler,
        new _M5_Display_getRawColor___void___uint32_t_Handler,
        new _M5_Display_getRotation___void___uint8_t_Handler,
        new _M5_Display_getTextDatum___void___textdatum_t_Handler,
        new _M5_Display_getTextPadding___void___uint32_t_Handler,
        new _M5_Display_getTextSizeX___void___float_Handler,
        new _M5_Display_getTextSizeY___void___float_Handler,
        new _M5_Display_setBaseColor___T___void_Handler,
        new _M5_Display_setColor___T___void_Handler,
        new _M5_Display_setColorDepth___color_depth_t___void_Handler,
        new _M5_Display_setRawColor___uint32_t___void_Handler,
        new _M5_Display_setTextPadding___uint32_t___void_Handler,
        new _M5_Display_setTextScroll___bool___void_Handler,
        new _M5_Display_setTextWrap___bool_bool___void_Handler,
        new _M5_Display_showFont___uint32_t___void_Handler,
        new _M5_Display_textLength___const_String_int32_t___int32_t_Handler,
        new _M5_Display_waitDisplay___void___void_Handler,
        new _M5_Display_progressBar___int_int_int_int_uint8_t___void_Handler,
        new _M5_Display_qrcode___const_String_int32_t_int32_t_int32_t_uint8_t___void_Handler,
        new _M5_Display_scroll___int_fast16_t_int_fast16_t___void_Handler,
        new _M5_Display_setScrollRect___int32_t_int32_t_int32_t_int32_t___void_Handler,
        new _M5_Display_getScrollRect___int32_t_int32_t__int32_t__int32_t___void_Handler,
        new _M5_Display_clearScrollRect___void___void_Handler,
        new _M5_Display_getTextStyle___void___const_TextStyle_Handler,
        new _M5_Display_setTextStyle___const_TextStyle___void_Handler,
        
        new _M5_Speaker_config___speaker_config_t___void_speaker_config_t_Handler,
        new _M5_Speaker_begin___void___bool_Handler,
        new _M5_Speaker_end___void___void_Handler,
        new _M5_Speaker_isRunning___void___bool_Handler,
        new _M5_Speaker_isEnabled___void___bool_Handler,
        new _M5_Speaker_isPlaying___uint8_t___size_t_bool_Handler,
        new _M5_Speaker_getPlayingChannels___void___size_t_Handler,
        new _M5_Speaker_setVolume___uint8_t___void_Handler,
        new _M5_Speaker_getVolume___void___uint8_t_Handler,
        new _M5_Speaker_setAllChannelVolume___uint8_t___void_Handler,
        new _M5_Speaker_setChannelVolume___uint8_t_uint8_t___void_Handler,
        new _M5_Speaker_getChannelVolume___uint8_t___uint8_t_Handler,
        new _M5_Speaker_stop___uint8_t___void_Handler,
        new _M5_Speaker_tone___float_uint32_t_int_bool___bool_Handler,
    });
    
    addEmitter({
        new _M5_update______void_Emitter,
        
        new _M5_Btn_wasClicked___void___bool_Emitter,
        new _M5_Btn_wasHold___void___bool_Emitter,
        new _M5_Btn_wasDeciedClickCount___void___bool_Emitter,
    });
}



String Opniz::M5Unified::_getVersion______String_Handler::procedure(JsonArray params) {
    return "OpnizM5Unified@0.1.1";
}



// MEMO: Overload
String Opniz::M5Unified::_M5_begin___const_config_t___void_Handler::procedure(JsonArray params) {
    JsonObject paramObject = params[0];
    auto config = M5.config();
    if (!paramObject["serial_baudrate"].isNull()) config.serial_baudrate = (uint32_t)paramObject["serial_baudrate"];
    if (!paramObject["clear_display"].isNull()) config.clear_display = (bool)paramObject["clear_display"];
    if (!paramObject["output_power"].isNull()) config.output_power = (bool)paramObject["output_power"];
    if (!paramObject["internal_imu"].isNull()) config.internal_imu = (bool)paramObject["internal_imu"];
    if (!paramObject["internal_rtc"].isNull()) config.internal_rtc = (bool)paramObject["internal_rtc"];
    if (!paramObject["internal_spk"].isNull()) config.internal_spk = (bool)paramObject["internal_spk"];
    if (!paramObject["internal_mic"].isNull()) config.internal_mic = (bool)paramObject["internal_mic"];
    if (!paramObject["external_imu"].isNull()) config.external_imu = (bool)paramObject["external_imu"];
    if (!paramObject["external_rtc"].isNull()) config.external_rtc = (bool)paramObject["external_rtc"];
    if (!paramObject["external_spk"].isNull()) config.external_spk = (bool)paramObject["external_spk"];
    if (!paramObject["led_brightness"].isNull()) config.led_brightness = (uint8_t)paramObject["led_brightness"];
    M5.begin(config);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_config___const_config_t___config_t_void_Handler::procedure(JsonArray params) {
    auto config = M5.config();
    
    if (params[0].isNull()) {
        String object = "{"
            "\"serial_baudrate\":" + (String)config.serial_baudrate + ","
            "\"clear_display\":" + (String)config.clear_display + ","
            "\"output_power\":" + (String)config.output_power + ","
            "\"internal_imu\":" + (String)config.internal_imu + ","
            "\"internal_rtc\":" + (String)config.internal_rtc + ","
            "\"internal_spk\":" + (String)config.internal_spk + ","
            "\"internal_mic\":" + (String)config.internal_mic + ","
            "\"external_imu\":" + (String)config.external_imu + ","
            "\"external_rtc\":" + (String)config.external_rtc + ","
            "\"external_spk\":" + (String)config.external_spk + ","
            "\"led_brightness\":" + (String)config.led_brightness + "}";
        return object;
        
    } else {
        JsonObject paramObject = params[0];
        if (!paramObject["serial_baudrate"].isNull()) config.serial_baudrate = (uint32_t)paramObject["serial_baudrate"];
        if (!paramObject["clear_display"].isNull()) config.clear_display = (bool)paramObject["clear_display"];
        if (!paramObject["output_power"].isNull()) config.output_power = (bool)paramObject["output_power"];
        if (!paramObject["internal_imu"].isNull()) config.internal_imu = (bool)paramObject["internal_imu"];
        if (!paramObject["internal_rtc"].isNull()) config.internal_rtc = (bool)paramObject["internal_rtc"];
        if (!paramObject["internal_spk"].isNull()) config.internal_spk = (bool)paramObject["internal_spk"];
        if (!paramObject["internal_mic"].isNull()) config.internal_mic = (bool)paramObject["internal_mic"];
        if (!paramObject["external_imu"].isNull()) config.external_imu = (bool)paramObject["external_imu"];
        if (!paramObject["external_rtc"].isNull()) config.external_rtc = (bool)paramObject["external_rtc"];
        if (!paramObject["external_spk"].isNull()) config.external_spk = (bool)paramObject["external_spk"];
        if (!paramObject["led_brightness"].isNull()) config.led_brightness = (uint8_t)paramObject["led_brightness"];
        M5.begin(config);
        return "true";
    }
}

String Opniz::M5Unified::_M5_getBoard___void___board_t_Handler::procedure(JsonArray params) {
    return (String)M5.getBoard();
}

String Opniz::M5Unified::_M5_getUpdateMsec___void___std_uint32_t_Handler::procedure(JsonArray params) {
    return (String)M5.getUpdateMsec();
}

String Opniz::M5Unified::_M5_update___void___void_Handler::procedure(JsonArray params) {
    M5.update();
    return "true";
}



String Opniz::M5Unified::_led_init______void_Handler::procedure(JsonArray params) {
    initLed();
    return "true";
}

String Opniz::M5Unified::_led_setBrightness___uint8_t___void_Handler::procedure(JsonArray params) {
    uint8_t brightness = (uint8_t)params[0];
    led.setBrightness(brightness);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_led_drawpix___uint8_t_uint8_t_CRGB_CRGB_undefined___void_Handler::procedure(JsonArray params) {
    if (params[2].isNull()) {
        uint8_t Number = (uint8_t)params[0];
        CRGB Color = int2crgb((uint32_t)params[1]);
        led.drawpix(Number, Color);
    } else {
        uint8_t xpos = (uint8_t)params[0];
        uint8_t ypos = (uint8_t)params[1];
        CRGB Color = int2crgb((uint32_t)params[2]);
        led.drawpix(xpos, ypos, Color);
    }
    return "true";
}

String Opniz::M5Unified::_led_fillpix___CRGB___void_Handler::procedure(JsonArray params) {
    CRGB Color = int2crgb((uint32_t)params[0]);
    led.fillpix(Color);
    return "true";
}

String Opniz::M5Unified::_led_clear______void_Handler::procedure(JsonArray params) {
    led.clear();
    return "true";
}

String Opniz::M5Unified::_led_setWidthHeight___uint16_t_uint16_t___void_Handler::procedure(JsonArray params) {
    uint16_t xColumns = (uint16_t)params[0];
    uint16_t yRows = (uint16_t)params[1];
    led.setWidthHeight(xColumns, yRows);
    return "true";
}



String Opniz::M5Unified::_M5_Btn_setDebounceThresh___uint32_t___void::procedure(JsonArray params) {
    uint32_t msec = (uint32_t)params[0];
    M5.BtnA.setDebounceThresh(msec);
    M5.BtnB.setDebounceThresh(msec);
    M5.BtnC.setDebounceThresh(msec);
    M5.BtnPWR.setDebounceThresh(msec);
    M5.BtnEXT.setDebounceThresh(msec);
    return "true";
}

String Opniz::M5Unified::_M5_Btn_setHoldThresh___uint32_t___void::procedure(JsonArray params) {
    uint32_t msec = (uint32_t)params[0];
    M5.BtnA.setHoldThresh(msec);
    M5.BtnB.setHoldThresh(msec);
    M5.BtnC.setHoldThresh(msec);
    M5.BtnPWR.setHoldThresh(msec);
    M5.BtnEXT.setHoldThresh(msec);
    return "true";
}

String Opniz::M5Unified::_M5_Btn_getDebounceThresh___void___uint32_t::procedure(JsonArray params) {
    return (String)M5.BtnA.getDebounceThresh();
}

String Opniz::M5Unified::_M5_Btn_getHoldThresh___void___uint32_t::procedure(JsonArray params) {
    return (String)M5.BtnA.getHoldThresh();
}



String Opniz::M5Unified::_M5_Imu_begin______bool_Handler::procedure(JsonArray params) {
    return (String)M5.Imu.begin();
}

String Opniz::M5Unified::_M5_Imu_getAccel___float_float_float___bool_Handler::procedure(JsonArray params) {
    float ax, ay, az;
    M5.Imu.getAccel(&ax, &ay, &az);
    return "[" + (String)ax + "," + (String)ay + "," + (String)az + "]";
}

String Opniz::M5Unified::_M5_Imu_getGyro___float_float_float___bool_Handler::procedure(JsonArray params) {
    float gx, gy, gz;
    M5.Imu.getGyro(&gx, &gy, &gz);
    return "[" + (String)gx + "," + (String)gy + "," + (String)gz + "]";
}

String Opniz::M5Unified::_M5_Imu_getTemp___float___bool_Handler::procedure(JsonArray params) {
    float t;
    M5.Imu.getTemp(&t);
    return (String)t;
}

String Opniz::M5Unified::_M5_Imu_isEnabled___void___bool_Handler::procedure(JsonArray params) {
    return (String)M5.Imu.isEnabled();
}

String Opniz::M5Unified::_M5_Imu_getType___void___imu_t_Handler::procedure(JsonArray params) {
    return (String)M5.Imu.getType();
}

String Opniz::M5Unified::_M5_Imu_setRotation___uint_fast8_t___void_Handler::procedure(JsonArray params) {
    uint_fast8_t rotation = (uint_fast8_t)params[0];
    M5.Imu.setRotation(rotation);
    return "true";
}



String Opniz::M5Unified::_M5_Display_height___void___int32_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.height();
}

String Opniz::M5Unified::_M5_Display_width___void___int32_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.width();
}

String Opniz::M5Unified::_M5_Display_setRotation___uint_fast8_t___void_Handler::procedure(JsonArray params) {
    uint_fast8_t rotation = (uint_fast8_t)params[0];
    M5.Display.setRotation(rotation);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_setCursor___int32_t_int32_t_uint8_t___void_Handler::procedure(JsonArray params) {
    int32_t x = (int32_t)params[0];
    int32_t y = (int32_t)params[1];
    int8_t font = (int8_t)params[2];
    M5.Display.setCursor(x, y, font);
    params[2].isNull() ? M5.Display.setCursor(x, y) : M5.Display.setCursor(x, y, font);
    return "true";
}

String Opniz::M5Unified::_M5_Display_color332___uint8_t_uint8_t_uint8_t___uint8_t_Handler::procedure(JsonArray params) {
    uint8_t r = (uint8_t)params[0];
    uint8_t g = (uint8_t)params[1];
    uint8_t b = (uint8_t)params[2];
    return (String)M5.Display.color332(r, g, b);
}

String Opniz::M5Unified::_M5_Display_color565___uint8_t_uint8_t_uint8_t___uint16_t_Handler::procedure(JsonArray params) {
    uint8_t r = (uint8_t)params[0];
    uint8_t g = (uint8_t)params[1];
    uint8_t b = (uint8_t)params[2];
    return (String)M5.Display.color565(r, g, b);
}

String Opniz::M5Unified::_M5_Display_color888___uint8_t_uint8_t_uint8_t___uint32_t_Handler::procedure(JsonArray params) {
    uint8_t r = (uint8_t)params[0];
    uint8_t g = (uint8_t)params[1];
    uint8_t b = (uint8_t)params[2];
    return (String)M5.Display.color888(r, g, b);
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_drawString___const_char_int32_t_int32_t_uint8_t___size_t_Handler::procedure(JsonArray params) {
    String string = params[0];
    int32_t x = (int32_t)params[1];
    int32_t y = (int32_t)params[2];
    int8_t font = (int8_t)params[3];
    return (String)(params[3].isNull() ? M5.Display.drawString(string, x, y) : M5.Display.drawString(string, x, y, font));
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_drawCentreString___const_String_int32_t_int32_t_uint8_t___size_t_Handler::procedure(JsonArray params) {
    String string = params[0];
    int32_t x = (int32_t)params[1];
    int32_t y = (int32_t)params[2];
    int8_t font = (int8_t)params[3];
    return (String)(params[3].isNull() ? M5.Display.drawCentreString(string, x, y) : M5.Display.drawCentreString(string, x, y, font));
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_drawRightString___const_String_int32_t_int32_t_uint8_t___size_t_Handler::procedure(JsonArray params) {
    String string = params[0];
    int32_t x = (int32_t)params[1];
    int32_t y = (int32_t)params[2];
    int8_t font = (int8_t)params[3];
    return (String)(params[3].isNull() ? M5.Display.drawRightString(string, x, y) : M5.Display.drawRightString(string, x, y, font));
}

String Opniz::M5Unified::_M5_Display_print___const_char___size_t_Handler::procedure(JsonArray params) {
    String str = params[0];
    return (String)M5.Display.print(str);
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_println___const_char___size_t_Handler::procedure(JsonArray params) {
    String c = params[0];
    return (String)(params[0].isNull() ? M5.Display.println() : M5.Display.println(c));
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_fillScreen___const_T___void_Handler::procedure(JsonArray params) {
    uint16_t color = (uint16_t)params[0];
    params[0].isNull() ? M5.Display.fillScreen() : M5.Display.fillScreen(color);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_clear___const_T___void_Handler::procedure(JsonArray params) {
    uint16_t color = (uint16_t)params[0];
    params[0].isNull() ? M5.Display.clear() : M5.Display.clear(color);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_setTextColor___T1_T2___void_Handler::procedure(JsonArray params) {
    uint16_t fgcolor = (uint16_t)params[0];
    uint16_t bgcolor = (uint16_t)params[1];
    params[1].isNull() ? M5.Display.setTextColor(fgcolor) : M5.Display.setTextColor(fgcolor, bgcolor);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setTextDatum___uint8_t___void_Handler::procedure(JsonArray params) {
    uint8_t datum = (uint8_t)params[0];
    M5.Display.setTextDatum(datum);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setTextFont___int___void_Handler::procedure(JsonArray params) {
    int f = (int)params[0];
    M5.Display.setTextFont(f);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_setTextSize___float_float___void_Handler::procedure(JsonArray params) {
    float sx = (float)params[0];
    float sy = (float)params[1];
    params[1].isNull() ? M5.Display.setTextSize(sx) : M5.Display.setTextSize(sx, sy);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setBrightness___uint8_t___void_Handler::procedure(JsonArray params) {
    uint8_t brightness = (uint8_t)params[0];
    M5.Display.setBrightness(brightness);
    return "true";
}

String Opniz::M5Unified::_M5_Display_getBrightness___void___uint8_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getBrightness();
}

String Opniz::M5Unified::_M5_Display_sleep___void___void_Handler::procedure(JsonArray params) {
    M5.Display.sleep();
    return "true";
}

String Opniz::M5Unified::_M5_Display_wakeup___void___void_Handler::procedure(JsonArray params) {
    M5.Display.wakeup();
    return "true";
}

String Opniz::M5Unified::_M5_Display_powerSave___bool___void_Handler::procedure(JsonArray params) {
    bool flg = (bool)params[0];
    M5.Display.powerSave(flg);
    return "true";
}

String Opniz::M5Unified::_M5_Display_powerSaveOn___void___void_Handler::procedure(JsonArray params) {
    M5.Display.powerSaveOn();
    return "true";
}

String Opniz::M5Unified::_M5_Display_powerSaveOff___void___void_Handler::procedure(JsonArray params) {
    M5.Display.powerSaveOff();
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_clearDisplay___int32_t___void_Handler::procedure(JsonArray params) {
    int32_t color = (int32_t)params[0];
    params[0].isNull() ?
        M5.Display.clearDisplay() :
        M5.Display.clearDisplay(color);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_fontHeight___int8_t___int32_t_Handler::procedure(JsonArray params) {
    uint8_t font = (int8_t)params[0];
    return params[0].isNull() ?
        (String)M5.Display.fontHeight() :
        (String)M5.Display.fontHeight(font);
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_fontWidth___int8_t___int32_t_Handler::procedure(JsonArray params) {
    uint8_t font = (int8_t)params[0];
    return params[0].isNull() ?
        (String)M5.Display.fontWidth() :
        (String)M5.Display.fontWidth(font);
}

String Opniz::M5Unified::_M5_Display_getBaseColor___void___uint32_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getBaseColor();
}

String Opniz::M5Unified::_M5_Display_getColorDepth___void___color_depth_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getColorDepth();
}

String Opniz::M5Unified::_M5_Display_getCursorX___void___int32_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getCursorX();
}

String Opniz::M5Unified::_M5_Display_getCursorY___void___int32_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getCursorY();
}

String Opniz::M5Unified::_M5_Display_getRawColor___void___uint32_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getRawColor();
}

String Opniz::M5Unified::_M5_Display_getRotation___void___uint8_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getRotation();
}

String Opniz::M5Unified::_M5_Display_getTextDatum___void___textdatum_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getTextDatum();
}

String Opniz::M5Unified::_M5_Display_getTextPadding___void___uint32_t_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getTextPadding();
}

String Opniz::M5Unified::_M5_Display_getTextSizeX___void___float_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getTextSizeX();
}

String Opniz::M5Unified::_M5_Display_getTextSizeY___void___float_Handler::procedure(JsonArray params) {
    return (String)M5.Display.getTextSizeY();
}

String Opniz::M5Unified::_M5_Display_setBaseColor___T___void_Handler::procedure(JsonArray params) {
    uint16_t c = (uint16_t)params[0];
    M5.Display.setBaseColor(c);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setColor___T___void_Handler::procedure(JsonArray params) {
    uint16_t color = (uint16_t)params[0];
    M5.Display.setColor(color);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setColorDepth___color_depth_t___void_Handler::procedure(JsonArray params) {
    uint16_t depth = (uint16_t)params[0];
    M5.Display.setColorDepth(depth);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setRawColor___uint32_t___void_Handler::procedure(JsonArray params) {
    uint32_t c = (uint32_t)params[0];
    M5.Display.setRawColor(c);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setTextPadding___uint32_t___void_Handler::procedure(JsonArray params) {
    uint32_t padding_x = (uint32_t)params[0];
    M5.Display.setTextPadding(padding_x);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setTextScroll___bool___void_Handler::procedure(JsonArray params) {
    bool scroll = (bool)params[0];
    M5.Display.setTextScroll(scroll);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_setTextWrap___bool_bool___void_Handler::procedure(JsonArray params) {
    bool wrapX = (bool)params[0];
    bool wrapY = (bool)params[1];
    params[1].isNull() ?
        M5.Display.setTextWrap(wrapX) :
        M5.Display.setTextWrap(wrapX, wrapY);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_showFont___uint32_t___void_Handler::procedure(JsonArray params) {
    uint32_t td = (uint32_t)params[0];
    params[0].isNull() ?
        M5.Display.showFont() :
        M5.Display.showFont(td);
    return "true";
}

String Opniz::M5Unified::_M5_Display_textLength___const_String_int32_t___int32_t_Handler::procedure(JsonArray params) {
    const String string = params[0];
    int32_t width = (uint32_t)params[1];
    return (String)M5.Display.textLength(string, width);
}

String Opniz::M5Unified::_M5_Display_waitDisplay___void___void_Handler::procedure(JsonArray params) {
    M5.Display.waitDisplay();
    return "true";
}

String Opniz::M5Unified::_M5_Display_progressBar___int_int_int_int_uint8_t___void_Handler::procedure(JsonArray params) {
    int x = (int)params[0];
    int y = (int)params[1];
    int w = (int)params[2];
    int h = (int)params[3];
    uint8_t val = (uint8_t)params[4];
    M5.Display.progressBar(x, y, w, h, val);
    return "true";
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_qrcode___const_String_int32_t_int32_t_int32_t_uint8_t___void_Handler::procedure(JsonArray params) {
    String string = params[0];
    int32_t x = (int32_t)params[1];
    int32_t y = (int32_t)params[2];
    int32_t width = (int32_t)params[3];
    uint8_t version= (uint8_t)params[4];
    
    if (params[1].isNull()) { M5.Display.qrcode(string); }
    else if (params[2].isNull()) { M5.Display.qrcode(string, x); }
    else if (params[3].isNull()) { M5.Display.qrcode(string, x, y); }
    else if (params[4].isNull()) { M5.Display.qrcode(string, x, y, width); }
    else { M5.Display.qrcode(string, x, y, width, version); }
    return "true";
}

String Opniz::M5Unified::_M5_Display_scroll___int_fast16_t_int_fast16_t___void_Handler::procedure(JsonArray params) {
    int_fast16_t dx = (int_fast16_t)params[0];
    int_fast16_t dy = (int_fast16_t)params[1];
    M5.Display.scroll(dx, dy);
    return "true";
}

String Opniz::M5Unified::_M5_Display_setScrollRect___int32_t_int32_t_int32_t_int32_t___void_Handler::procedure(JsonArray params) {
    int32_t x = (int32_t)params[0];
    int32_t y = (int32_t)params[1];
    int32_t w = (int32_t)params[2];
    int32_t h = (int32_t)params[3];
    M5.Display.setScrollRect(x, y, w, h);
    return "true";
}

String Opniz::M5Unified::_M5_Display_getScrollRect___int32_t_int32_t__int32_t__int32_t___void_Handler::procedure(JsonArray params) {
    int32_t x, y, w, h;
    M5.Display.getScrollRect(&x, &y, &w, &h);
    return "[" + (String)x + "," + (String)y + "," + (String)w + "," + (String)h + "]";
}

String Opniz::M5Unified::_M5_Display_clearScrollRect___void___void_Handler::procedure(JsonArray params) {
    M5.Display.clearScrollRect();
    return "true";
}

String Opniz::M5Unified::_M5_Display_getTextStyle___void___const_TextStyle_Handler::procedure(JsonArray params) {
    auto textStyle = M5.Display.getTextStyle();
    String object = "{"
        "\"fore_rgb888\":" + (String)textStyle.fore_rgb888 + ","
        "\"back_rgb888\":" + (String)textStyle.back_rgb888 + ","
        "\"size_x\":" + (String)textStyle.size_x + ","
        "\"size_y\":" + (String)textStyle.size_y + ","
        "\"datum\":" + (String)textStyle.datum + ","
        "\"padding_x\":" + (String)textStyle.padding_x + ","
        "\"utf8\":" + (String)textStyle.utf8 + ","
        "\"cp437\":" + (String)textStyle.cp437 + "}";
    return object;
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Display_setTextStyle___const_TextStyle___void_Handler::procedure(JsonArray params) {
    JsonObject paramObject = params[0];
    auto textStyle = M5.Display.getTextStyle();
    if (!paramObject["fore_rgb888"].isNull()) textStyle.fore_rgb888 = (uint32_t)paramObject["fore_rgb888"];
    if (!paramObject["back_rgb888"].isNull()) textStyle.back_rgb888 = (uint32_t)paramObject["back_rgb888"];
    if (!paramObject["size_x"].isNull()) textStyle.size_x = (float)paramObject["size_x"];
    if (!paramObject["size_y"].isNull()) textStyle.size_y = (float)paramObject["size_y"];
    if (!paramObject["datum"].isNull()) textStyle.datum = (textdatum_t)paramObject["datum"];
    if (!paramObject["padding_x"].isNull()) textStyle.padding_x = (int32_t)paramObject["padding_x"];
    if (!paramObject["utf8"].isNull()) textStyle.utf8 = (bool)paramObject["utf8"];
    if (!paramObject["cp437"].isNull()) textStyle.cp437 = (bool)paramObject["cp437"];
    M5.Display.setTextStyle(textStyle);
    return "true";
}



// MEMO: Overload
String Opniz::M5Unified::_M5_Speaker_config___speaker_config_t___void_speaker_config_t_Handler::procedure(JsonArray params) {
    JsonObject paramObject = params[0];
    auto cfg = M5.Speaker.config();
    
    if (params[0].isNull()) {
        String object = "{"
            "\"pin_data_out\":" + (String)cfg.pin_data_out + ","
            "\"pin_bck\":" + (String)cfg.pin_bck + ","
            "\"pin_ws\":" + (String)cfg.pin_ws + ","
            "\"sample_rate\":" + (String)cfg.sample_rate + ","
            "\"stereo\":" + (String)cfg.stereo + ","
            "\"buzzer\":" + (String)cfg.buzzer + ","
            "\"use_dac\":" + (String)cfg.use_dac + ","
            "\"dac_zero_level\":" + (String)cfg.dac_zero_level + ","
            "\"magnification\":" + (String)cfg.magnification + ","
            "\"dma_buf_len\":" + (String)cfg.dma_buf_len + ","
            "\"dma_buf_count\":" + (String)cfg.dma_buf_count + ","
            "\"task_priority\":" + (String)cfg.task_priority + ","
            "\"task_pinned_core\":" + (String)cfg.task_pinned_core + ","
            "\"i2s_port\":" + (String)cfg.i2s_port + "}";
        return object;
        
    } else {
        if (!paramObject["pin_data_out"].isNull()) cfg.pin_data_out = (int)paramObject["pin_data_out"];
        if (!paramObject["pin_bck"].isNull()) cfg.pin_bck = (int)paramObject["pin_bck"];
        if (!paramObject["pin_ws"].isNull()) cfg.pin_ws = (int)paramObject["pin_ws"];
        if (!paramObject["sample_rate"].isNull()) cfg.sample_rate = (uint32_t)paramObject["sample_rate"];
        if (!paramObject["stereo"].isNull()) cfg.stereo = (bool)paramObject["stereo"];
        if (!paramObject["buzzer"].isNull()) cfg.buzzer = (bool)paramObject["buzzer"];
        if (!paramObject["use_dac"].isNull()) cfg.use_dac = (bool)paramObject["use_dac"];
        if (!paramObject["dac_zero_level"].isNull()) cfg.dac_zero_level = (uint8_t)paramObject["dac_zero_level"];
        if (!paramObject["magnification"].isNull()) cfg.magnification = (uint8_t)paramObject["magnification"];
        if (!paramObject["dma_buf_len"].isNull()) cfg.dma_buf_len = (size_t)paramObject["dma_buf_len"];
        if (!paramObject["dma_buf_count"].isNull()) cfg.dma_buf_count = (size_t)paramObject["dma_buf_count"];
        if (!paramObject["task_priority"].isNull()) cfg.task_priority = (UBaseType_t)paramObject["task_priority"];
        if (!paramObject["task_pinned_core"].isNull()) cfg.task_pinned_core = (BaseType_t)paramObject["task_pinned_core"];
        if (!paramObject["i2s_port"].isNull()) cfg.i2s_port = (i2s_port_t)paramObject["i2s_port"];
        M5.Speaker.config(cfg);
        return "true";
    }
}

String Opniz::M5Unified::_M5_Speaker_begin___void___bool_Handler::procedure(JsonArray params) {
    return (String)M5.Speaker.begin();
}

String Opniz::M5Unified::_M5_Speaker_end___void___void_Handler::procedure(JsonArray params) {
    M5.Speaker.end();
    return "true";
}

String Opniz::M5Unified::_M5_Speaker_isRunning___void___bool_Handler::procedure(JsonArray params) {
    return (String)M5.Speaker.isRunning();
}

String Opniz::M5Unified::_M5_Speaker_isEnabled___void___bool_Handler::procedure(JsonArray params) {
    return (String)M5.Speaker.isEnabled();
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Speaker_isPlaying___uint8_t___size_t_bool_Handler::procedure(JsonArray params) {
    uint8_t channel = (uint8_t)params[0];
    return params[0].isNull() ? (String)M5.Speaker.isPlaying() : (String)M5.Speaker.isPlaying(channel);
}

String Opniz::M5Unified::_M5_Speaker_getPlayingChannels___void___size_t_Handler::procedure(JsonArray params) {
    return (String)M5.Speaker.getPlayingChannels();
}

String Opniz::M5Unified::_M5_Speaker_setVolume___uint8_t___void_Handler::procedure(JsonArray params) {
    uint8_t master_volume = (uint8_t)params[0];
    M5.Speaker.setVolume(master_volume);
    return "true";
}

String Opniz::M5Unified::_M5_Speaker_getVolume___void___uint8_t_Handler::procedure(JsonArray params) {
    return (String)M5.Speaker.getVolume();
}

String Opniz::M5Unified::_M5_Speaker_setAllChannelVolume___uint8_t___void_Handler::procedure(JsonArray params) {
    uint8_t volume = (uint8_t)params[0];
    M5.Speaker.setAllChannelVolume(volume);
    return "true";
}

String Opniz::M5Unified::_M5_Speaker_setChannelVolume___uint8_t_uint8_t___void_Handler::procedure(JsonArray params) {
    uint8_t channel = (uint8_t)params[0];
    uint8_t volume = (uint8_t)params[1];
    M5.Speaker.setChannelVolume(channel, volume);
    return "true";
}

String Opniz::M5Unified::_M5_Speaker_getChannelVolume___uint8_t___uint8_t_Handler::procedure(JsonArray params) {
    uint8_t channel = (uint8_t)params[0];
    return (String)M5.Speaker.getChannelVolume(channel);
}

// MEMO: Overload
String Opniz::M5Unified::_M5_Speaker_stop___uint8_t___void_Handler::procedure(JsonArray params) {
    uint8_t channel = (uint8_t)params[0];
    params[0].isNull() ? M5.Speaker.stop() : M5.Speaker.stop(channel);
    return "true";
}

String Opniz::M5Unified::_M5_Speaker_tone___float_uint32_t_int_bool___bool_Handler::procedure(JsonArray params) {
    float frequency = (float)params[0];
    uint32_t duration = (uint32_t)params[1];
    int channel = (int)params[2];
    bool stop_current_sound = (bool)params[3];
    return (String)M5.Speaker.tone(frequency, duration, channel, stop_current_sound);
}










// MEMO: RPCは送らない、loop実行だけする用emitter
boolean Opniz::M5Unified::_M5_update______void_Emitter::canEmit() {
    M5.update();
    return false;
}
String Opniz::M5Unified::_M5_update______void_Emitter::emit() {
    return "";
}



uint8_t ButtonEmitter::_getClickCount(String buttonBitStr) {
    switch (std::stoi(buttonBitStr.c_str())) {
        case 1: return M5.BtnA.getClickCount();
        case 2: return M5.BtnB.getClickCount();
        case 4: return M5.BtnC.getClickCount();
        case 8: return M5.BtnPWR.getClickCount();
        case 16: return M5.BtnEXT.getClickCount();
        default: return 0;
    }
}

boolean Opniz::M5Unified::_M5_Btn_wasClicked___void___bool_Emitter::canEmit() {
    uint8_t trueButtonsBit = 0;
    uint8_t count = 0;
    auto buttons = { M5.BtnA, M5.BtnB, M5.BtnC, M5.BtnPWR, M5.BtnEXT };
    for (auto button : buttons) { if (button.wasClicked()) trueButtonsBit |= 1 << count; count++; }
    attribute = (String)trueButtonsBit;
    return trueButtonsBit > 0;
}
String Opniz::M5Unified::_M5_Btn_wasClicked___void___bool_Emitter::emit() {
    std::vector<String> params;
    params.emplace_back(attribute);
    params.emplace_back(_getClickCount(attribute));
    return createRpcRequest("_M5.Btn.wasClicked(void):bool", params);
}

boolean Opniz::M5Unified::_M5_Btn_wasHold___void___bool_Emitter::canEmit() {
    uint8_t trueButtonsBit = 0;
    uint8_t count = 0;
    auto buttons = { M5.BtnA, M5.BtnB, M5.BtnC, M5.BtnPWR, M5.BtnEXT };
    for (auto button : buttons) { if (button.wasHold()) trueButtonsBit |= 1 << count; count++; }
    attribute = (String)trueButtonsBit;
    return trueButtonsBit > 0;
}
String Opniz::M5Unified::_M5_Btn_wasHold___void___bool_Emitter::emit() {
    std::vector<String> params;
    params.emplace_back(attribute);
    return createRpcRequest("_M5.Btn.wasHold(void):bool", params);
}

boolean Opniz::M5Unified::_M5_Btn_wasDeciedClickCount___void___bool_Emitter::canEmit() {
    uint8_t trueButtonsBit = 0;
    uint8_t count = 0;
    auto buttons = { M5.BtnA, M5.BtnB, M5.BtnC, M5.BtnPWR, M5.BtnEXT };
    for (auto button : buttons) { if (button.wasDeciedClickCount()) trueButtonsBit |= 1 << count; count++; }
    attribute = (String)trueButtonsBit;
    return trueButtonsBit > 0;
}
String Opniz::M5Unified::_M5_Btn_wasDeciedClickCount___void___bool_Emitter::emit() {
    std::vector<String> params;
    params.emplace_back(attribute);
    params.emplace_back(_getClickCount(attribute));
    return createRpcRequest("_M5.Btn.wasDeciedClickCount(void):bool", params);
}
