#include <ESP32Servo.h>            // ESP32Servo라이브러리 포함
#define SERVO_PIN     1            // 서보 핀 1번에 연결

Servo servo;                       // 서보 객체 생성

void setup() {
  servo.attach(SERVO_PIN);         // 서보 객체를 SERVO_PIN과 연결  
}

void loop() {
  servo.write(10);                  // 서보 0도 각도로 이동
  delay(1000);                     // 1초 대기
  servo.write(170);                // 서보 180도 각도로 이동
  delay(1000);                     // 1초 대기
}