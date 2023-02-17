#ifndef OPNIZ_M5UNIFIED_H
#define OPNIZ_M5UNIFIED_H

#include <M5Unified.h>

#include "./esp32/src/opniz/Esp32.h"
#include "./M5UnifiedUtil.h"

class ButtonEmitter : public BaseEmitter {
protected:
    uint8_t _getClickCount(String buttonBitStr);
};

namespace Opniz {
    class M5Unified : public Esp32 {
    private:
        void _constructor();

    public:
        M5Unified(const char* address, const uint16_t port);
        M5Unified(const char* address, const uint16_t port, const String id);
        M5Unified(const char* address, const uint16_t port, const Protocol protocol);
        M5Unified(const char* address, const uint16_t port, const String id, const Protocol protocol);
        ~M5Unified() {};

        class _getVersion______String_Handler : public BaseHandler { public: String name() override { return "_getVersion(void):String"; }; String procedure(JsonArray params) override; };

        class _M5_begin___const_config_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.begin(const config_t&):void"; }; String procedure(JsonArray params) override; };
        class _M5_config___const_config_t___config_t_void_Handler : public BaseHandler { public: String name() override { return "_M5.config(const config_t&):config_t|void"; }; String procedure(JsonArray params) override; };
        class _M5_config___const_config_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.config(const config_t&):void"; }; String procedure(JsonArray params) override; };
        class _M5_getBoard___void___board_t_Handler : public BaseHandler { public: String name() override { return "_M5.getBoard(void):board_t"; }; String procedure(JsonArray params) override; };
        class _M5_getUpdateMsec___void___std_uint32_t_Handler : public BaseHandler { public: String name() override { return "_M5.getUpdateMsec(void):std::uint32_t"; }; String procedure(JsonArray params) override; };
        class _M5_update___void___void_Handler : public BaseHandler { public: String name() override { return "_M5.update(void):void"; }; String procedure(JsonArray params) override; };

        class _led_init______void_Handler : public BaseHandler { public: String name() override { return "_led.init():void"; }; String procedure(JsonArray params) override; };
        class _led_setBrightness___uint8_t___void_Handler : public BaseHandler { public: String name() override { return "_led.setBrightness(uint8_t):void"; }; String procedure(JsonArray params) override; };
        class _led_drawpix___uint8_t_uint8_t_CRGB_CRGB_undefined___void_Handler : public BaseHandler { public: String name() override { return "_led.drawpix(uint8_t,uint8_t|CRGB,CRGB|undefined):void"; }; String procedure(JsonArray params) override; };
        class _led_fillpix___CRGB___void_Handler : public BaseHandler { public: String name() override { return "_led.fillpix(CRGB):void"; }; String procedure(JsonArray params) override; };
        class _led_clear______void_Handler : public BaseHandler { public: String name() override { return "_led.clear():void"; }; String procedure(JsonArray params) override; };
        class _led_setWidthHeight___uint16_t_uint16_t___void_Handler : public BaseHandler { public: String name() override { return "_led.setWidthHeight(uint16_t,uint16_t):void"; }; String procedure(JsonArray params) override; };

        class _M5_Btn_setDebounceThresh___uint32_t___void : public BaseHandler { public: String name() override { return "_M5.Btn.setDebounceThresh(uint32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Btn_setHoldThresh___uint32_t___void : public BaseHandler { public: String name() override { return "_M5.Btn.setHoldThresh(uint32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Btn_getDebounceThresh___void___uint32_t : public BaseHandler { public: String name() override { return "_M5.Btn.getDebounceThresh(void):uint32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Btn_getHoldThresh___void___uint32_t : public BaseHandler { public: String name() override { return "_M5.Btn.getHoldThresh(void):uint32_t"; }; String procedure(JsonArray params) override; };

        class _M5_Imu_begin______bool_Handler : public BaseHandler { public: String name() override { return "_M5.Imu.begin():bool"; }; String procedure(JsonArray params) override; };
        class _M5_Imu_getAccel___float_float_float___bool_Handler : public BaseHandler { public: String name() override { return "_M5.Imu.getAccel(float*,float*,float*):bool"; }; String procedure(JsonArray params) override; };
        class _M5_Imu_getGyro___float_float_float___bool_Handler : public BaseHandler { public: String name() override { return "_M5.Imu.getGyro(float*,float*,float*):bool"; }; String procedure(JsonArray params) override; };
        class _M5_Imu_getTemp___float___bool_Handler : public BaseHandler { public: String name() override { return "_M5.Imu.getTemp(float*):bool"; }; String procedure(JsonArray params) override; };
        class _M5_Imu_isEnabled___void___bool_Handler : public BaseHandler { public: String name() override { return "_M5.Imu.isEnabled(void):bool"; }; String procedure(JsonArray params) override; };
        class _M5_Imu_getType___void___imu_t_Handler : public BaseHandler { public: String name() override { return "_M5.Imu.getType(void):imu_t"; }; String procedure(JsonArray params) override; };
        class _M5_Imu_setRotation___uint_fast8_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Imu.setRotation(uint_fast8_t):void"; }; String procedure(JsonArray params) override; };

        class _M5_Display_height___void___int32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.height(void):int32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_width___void___int32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.width(void):int32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setRotation___uint_fast8_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setRotation(uint_fast8_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setCursor___int32_t_int32_t_uint8_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setCursor(int32_t,int32_t,uint8_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_color332___uint8_t_uint8_t_uint8_t___uint8_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.color332(uint8_t,uint8_t,uint8_t):uint8_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_color565___uint8_t_uint8_t_uint8_t___uint16_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.color565(uint8_t,uint8_t,uint8_t):uint16_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_color888___uint8_t_uint8_t_uint8_t___uint32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.color888(uint8_t,uint8_t,uint8_t):uint32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_drawString___const_char_int32_t_int32_t_uint8_t___size_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.drawString(const char*,int32_t,int32_t,uint8_t):size_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_drawCentreString___const_String_int32_t_int32_t_uint8_t___size_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.drawCentreString(const String&,int32_t,int32_t,uint8_t):size_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_drawRightString___const_String_int32_t_int32_t_uint8_t___size_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.drawRightString(const String&,int32_t,int32_t,uint8_t):size_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_print___const_char___size_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.print(const char):size_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_println___const_char___size_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.println(const char):size_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_fillScreen___const_T___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.fillScreen(const T&):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_clear___const_T___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.clear(const T&):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextColor___T1_T2___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextColor(T1,T2):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextDatum___uint8_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextDatum(uint8_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextFont___int___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextFont(int):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextSize___float_float___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextSize(float,float):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setBrightness___uint8_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setBrightness(uint8_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getBrightness___void___uint8_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getBrightness(void):uint8_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_sleep___void___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.sleep(void):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_wakeup___void___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.wakeup(void):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_powerSave___bool___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.powerSave(bool):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_powerSaveOn___void___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.powerSaveOn(void):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_powerSaveOff___void___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.powerSaveOff(void):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_clearDisplay___int32_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.clearDisplay(int32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_fontHeight___int8_t___int32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.fontHeight(int8_t):int32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_fontWidth___int8_t___int32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.fontWidth(int8_t):int32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getBaseColor___void___uint32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getBaseColor(void):uint32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getColorDepth___void___color_depth_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getColorDepth(void):color_depth_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getCursorX___void___int32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getCursorX(void):int32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getCursorY___void___int32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getCursorY(void):int32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getRawColor___void___uint32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getRawColor(void):uint32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getRotation___void___uint8_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getRotation(void):uint8_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getTextDatum___void___textdatum_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getTextDatum(void):textdatum_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getTextPadding___void___uint32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getTextPadding(void):uint32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getTextSizeX___void___float_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getTextSizeX(void):float"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getTextSizeY___void___float_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getTextSizeY(void):float"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setBaseColor___T___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setBaseColor(T):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setColor___T___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setColor(T):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setColorDepth___color_depth_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setColorDepth(color_depth_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setRawColor___uint32_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setRawColor(uint32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextPadding___uint32_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextPadding(uint32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextScroll___bool___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextScroll(bool):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextWrap___bool_bool___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextWrap(bool,bool):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_showFont___uint32_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.showFont(uint32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_textLength___const_String_int32_t___int32_t_Handler : public BaseHandler { public: String name() override { return "_M5.Display.textLength(const String&,int32_t):int32_t"; }; String procedure(JsonArray params) override; };
        class _M5_Display_waitDisplay___void___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.waitDisplay(void):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_progressBar___int_int_int_int_uint8_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.progressBar(int,int,int,int,uint8_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_qrcode___const_String_int32_t_int32_t_int32_t_uint8_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.qrcode(const String,int32_t,int32_t,int32_t,uint8_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_scroll___int_fast16_t_int_fast16_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.scroll(int_fast16_t,int_fast16_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setScrollRect___int32_t_int32_t_int32_t_int32_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setScrollRect(int32_t,int32_t,int32_t,int32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getScrollRect___int32_t_int32_t__int32_t__int32_t___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getScrollRect(int32_t,int32_t ,int32_t ,int32_t):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_clearScrollRect___void___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.clearScrollRect(void):void"; }; String procedure(JsonArray params) override; };
        class _M5_Display_getTextStyle___void___const_TextStyle_Handler : public BaseHandler { public: String name() override { return "_M5.Display.getTextStyle(void):const TextStyle&"; }; String procedure(JsonArray params) override; };
        class _M5_Display_setTextStyle___const_TextStyle___void_Handler : public BaseHandler { public: String name() override { return "_M5.Display.setTextStyle(const TextStyle&):void"; }; String procedure(JsonArray params) override; };



        class _M5_update______void_Emitter : public BaseEmitter { public: boolean canEmit() override; String emit() override; };

        class _M5_Btn_wasClicked___void___bool_Emitter : public ButtonEmitter { public: boolean canEmit() override; String emit() override; };
        class _M5_Btn_wasHold___void___bool_Emitter : public ButtonEmitter { public: boolean canEmit() override; String emit() override; };
        class _M5_Btn_wasDeciedClickCount___void___bool_Emitter : public ButtonEmitter { public: boolean canEmit() override; String emit() override; };
    };

}

#endif
