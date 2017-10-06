#define MOTOR_A_1 5
#define MOTOR_A_2 6
#define MOTOR_B_1 10
#define MOTOR_B_2 11
#define LED 13

#include <SoftwareSerial.h>

int command;
int Speed = 204;
int buttonState = 0;
int lastButtonState = 0;
int brakeTime = 45;

SoftwareSerial bluetooth(2, 3);

void setup() {
  pinMode(MOTOR_A_1, OUTPUT);
  pinMode(MOTOR_A_2, OUTPUT);
  pinMode(MOTOR_B_1, OUTPUT);
  pinMode(MOTOR_B_2, OUTPUT);
  pinMode(LED, OUTPUT);
  bluetooth.begin(9600);
}

void loop() {
  if (bluetooth.available() > 0) {
    command = bluetooth.read();
    digitalWrite(LED, LOW);
    switch (command) {
      case 'F':
        forward();
        break;
      case 'B':
        back();
        break;
      case 'L':
        left();
        break;
      case 'R':
        right();
        break;
      case 'G':
        forwardleft();
        break;
      case 'I':
        forwardright();
        break;
      case 'H':
        backleft();
        break;
      case 'J':
        backright();
        break;
      case '0':
        Speed = 100;
        break;
      case '1':
        Speed = 140;
        break;
      case '2':
        Speed = 153;
        break;
      case '3':
        Speed = 165;
        break;
      case '4':
        Speed = 178;
        break;
      case '5':
        Speed = 191;
        break;
      case '6':
        Speed = 204;
        break;
      case '7':
        Speed = 216;
        break;
      case '8':
        Speed = 229;
        break;
      case '9':
        Speed = 242;
        break;
      case 'q':
        Speed = 255;
        break;
    }
  }
  else {
    digitalWrite(LED, HIGH);
    Stop();
  }
}

void forward() {
  analogWrite(MOTOR_A_1, Speed);
  analogWrite(MOTOR_B_1, Speed);
}

void back() {
  analogWrite(MOTOR_A_2, Speed);
  analogWrite(MOTOR_B_2, Speed);
}

void left() {
  analogWrite(MOTOR_B_1, Speed);
  analogWrite(MOTOR_A_2, Speed);
}

void right() {
  analogWrite(MOTOR_B_2, Speed);
  analogWrite(MOTOR_A_1, Speed);
}

void forwardleft() {
  analogWrite(MOTOR_A_1, 0);
  analogWrite(MOTOR_B_1, Speed);
}

void forwardright() {
  analogWrite(MOTOR_A_1, Speed);
  analogWrite(MOTOR_B_1, 0);
}

void backright() {
  analogWrite(MOTOR_A_2, Speed);
  analogWrite(MOTOR_B_2, 0);
}

void backleft() {
  analogWrite(MOTOR_A_2, 0);
  analogWrite(MOTOR_B_2, Speed);
}

void Stop() {
  analogWrite(MOTOR_A_1, 0);
  analogWrite(MOTOR_A_2, 0);
  analogWrite(MOTOR_B_1, 0);
  analogWrite(MOTOR_B_2, 0);
}

