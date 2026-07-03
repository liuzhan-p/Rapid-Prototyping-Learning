#include <Wire.h>
#include <WiFi.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {

  Serial.begin(115200);

  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED initialization failed!");
    while (true);
  }

  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

}

void loop() {

  display.clearDisplay();


  display.setTextSize(1);
  display.setCursor(12,0);
  display.println("ESP32 Dashboard");

  display.drawLine(0,10,127,10,SSD1306_WHITE);

  // ===== Running Time =====
  display.setCursor(0,16);
  display.print("Time : ");
  display.print(millis()/1000);
  display.println(" s");

  // ===== CPU =====
  display.setCursor(0,28);
  display.print("CPU  : ");
  display.print(getCpuFrequencyMhz());
  display.println(" MHz");

  // ===== Heap =====
  display.setCursor(0,40);
  display.print("Heap : ");
  display.print(ESP.getFreeHeap()/1024);
  display.println(" KB");

  // ===== SDK =====
  display.setCursor(0,52);
  display.print("SDK  : ");
  display.print(ESP.getSdkVersion());

  display.display();

  delay(200);
}