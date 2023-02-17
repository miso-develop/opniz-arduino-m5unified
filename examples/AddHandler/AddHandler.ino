// 内蔵フルカラーLEDを使用する場合は対応するデバイスのdefineを有効化
#define M5ATOM_LED_ENABLE
// #define M5ATOMS3_LITE_LED_ENABLE
// #define M5STAMP_S3_LED_ENABLE
// #define M5STAMP_PICO_LED_ENABLE

#include <OpnizM5Unified.h>
#include <lib/WiFiConnector.h>

const char* ssid = "<SSID>";         // WiFiのSSIDに書き換え
const char* password = "<PASSWORD>"; // WiFiのパスワードに書き換え
WiFiConnector wifiConnector(ssid, password); // WiFi接続ヘルパーインスタンス生成

const char* address = "192.168.0.1"; // Node.js SDKを実行する端末のIPアドレスを指定
const uint16_t port = 3000;          // Node.js SDKを実行する端末のポート番号を指定
Opniz::Esp32* opniz = new Opniz::Esp32(address, port); // M5UnifiedクラスではなくEsp32クラスでopnizインスタンス生成



// 独自ハンドラーを作成
class FillpixHandler : public BaseHandler {
public:
    String name() override { return "_led.fillpix(CRGB):void"; }; // Node.js側から受け取るRPC methodを指定
    String procedure(JsonArray params) override { // nameメソッドと一致するRPCを受信したときに実行する処理を記述
        CRGB Color = int2crgb(params[0]);
        led.fillpix(Color);
        return "true"; // 特に戻り値がなければ文字列でtrueを返す
    }
};



// 独自エミッターを作成
class ButtonEmitter : public BaseEmitter {
public:
    boolean canEmit() override { // true/falseを返却する処理を記述
        M5.update();
        return M5.BtnA.wasClicked();
    };
    String emit() override { // canEmitの結果がtrueなら実行される
        std::vector<String> parameters;
        parameters.emplace_back("BtnA"); // RPCリクエストのパラメーターを指定
        return createRpcRequest("_M5.Btn.wasClicked(void):bool", parameters); // RPC methodを指定し、RPCリクエストを送信
    };
};



void setup() {
    M5.begin(); // M5デバイス初期化
    initLed(); // LED初期化
    
    wifiConnector.setTimeoutCallback([]() { esp_restart(); }); // WiFi接続タイムアウト時にリブート
    wifiConnector.connect(); // WiFi接続
    
    opniz->addHandler({ new FillpixHandler }); // 独自ハンドラーを登録
    opniz->addEmitter({ new ButtonEmitter }); // 独自エミッターを登録
    
    Serial.printf("opniz server address: %s\nopniz server port: %u\n\n", opniz->getAddress(), opniz->getPort()); // Node.js SDK接続情報を表示
    opniz->connect(); // Node.js SDKへ接続
}

void loop() {
    opniz->loop(); // opnizメインループ
    wifiConnector.watch(); // WiFi接続監視
}
