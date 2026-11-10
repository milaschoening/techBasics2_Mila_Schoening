#include <Servo.h>
Servo myservo1;
Servo myservo2;

const int servo1 = 8;
const int servo2 = 7;

const int X = A0;
const int Y = A1;
const int pin = 3;

int stateX = 0;
int stateY = 0;
int statePin = 0;

int servo1Value = 0;
int servo2Value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  pinMode(pin, INPUT_PULLUP);
  myservo1.attach(8);
  myservo2.attach(7);
}

void loop() {
  stateX = analogRead(X);
  stateY = analogRead(Y);
  statePin = digitalRead(pin);

  Serial.print("X:");
  Serial.println(stateX);
  Serial.print("Y:");
  Serial.println(stateY);
  Serial.print("Button:");
  Serial.println(statePin);
  Serial.print(" ");
  Serial.println(" ");

servo1Value = map(stateX, 0, 1023, 0, 180);
servo2Value = map(stateY, 0, 1023, 0, 180);

myservo1.write(servo1Value);
myservo2.write(servo2Value);
}

