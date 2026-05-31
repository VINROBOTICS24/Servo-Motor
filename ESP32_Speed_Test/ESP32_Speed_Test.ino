#include <ESP32Servo.h>                    // ESP32Servo라이브러리 포함
#define SERVO_PIN            1             // 서보 핀 1번에 연결

Servo myServo;                             // 서보 객체 생성

int speed = 15;                            // 속도 조절 변수, 숫자가 커지면 느려짐

void setup() {
  myServo.attach(SERVO_PIN);               // 서보객체를 SERVO_PIN과 연결  
  myServo.write(0);                        // 서보모터 0도 위치
  delay(500);
}

void loop() {
  int pos;                                 
  for (pos = 0; pos <= 180; pos += 1) {    // 0도에서 180도로 서보를 이동
    myServo.write(pos);                    // 서보의 위치를 지정
    delay(speed);                          // 이동 속도를 조절하기 위한 딜레이 
  }


  for (pos = 180; pos >= 0; pos -= 1) {    // 180도에서 0도로 서보를 이동
    myServo.write(pos);                    // 서보의 위치를 지정
    delay(speed);                          // 이동 속도를 조절하기 위한 딜레이 
  }
}