// 内蔵フルカラーLEDを使用する場合は対応するデバイスのdefineを有効化
// #define M5ATOM_LED_ENABLE
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
Opniz::M5Unified* opniz = new Opniz::M5Unified(address, port); // opnizインスタンス生成



void setup() {
    initM5(); // M5デバイス初期化
    
    wifiConnector.setTimeoutCallback([]() { esp_restart(); }); // WiFi接続タイムアウト時にリブート
    wifiConnector.connect(); // WiFi接続
    
    Serial.printf("opniz server address: %s\nopniz server port: %u\n\n", opniz->getAddress(), opniz->getPort()); // Node.js SDK接続情報を表示
    opniz->connect(); // Node.js SDKへ接続
}

void loop() {
    opniz->loop(); // opnizメインループ
    wifiConnector.watch(); // WiFi接続監視
}
