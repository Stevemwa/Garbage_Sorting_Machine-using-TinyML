#include <Servo.h>
Servo servo;

int buffer_Weight[20];
int i = 0;
int sum=0;
int average =0;


void setup() {
  Serial1.begin(9600);
  Serial.begin(9600);
  servo.attach(9);  // Attach servo signal to pin 9
}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial1.available() > 0) {
    String command = Serial1.readStringUntil('\n');  // Read command from serial
    Serial.println(command);

    if (command.startsWith("ewaste")) {
      buffer_Weight[i] = 1;
    }
    if (command.startsWith("plastic")) {
      buffer_Weight[i] = 5;
    }
    if (command.startsWith("Organice")) {
      buffer_Weight[i] = 15;
    }
    if (command.startsWith("paper")) {
      buffer_Weight[i] = 20;
    }
    i++;
  }

  if (i > 20) {
    i = 0;
    for (int j = 0; j <= 20; j++) {
      sum = sum + buffer_Weight[j];
    }
    average = sum / 20;
    if (average > 17) {
      servo.write(45);
    } else if (average > 10) {
      servo.write(90);
    } else if (average > 4) {
      servo.write(135);
    } else {
      servo.write(180);
    }
    sum=0;
    average=0;
  }

  Serial.println(average);
}
