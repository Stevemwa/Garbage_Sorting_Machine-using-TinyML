#include <Servo.h>
#include <Arduino_APDS9960.h>
#define MotorCtrl_Pin 6
Servo servo;


int inferencing =0;
int ewaste_count = 0;
int plastic_count = 0;
int organice_count = 0;
int paper_count = 0;
int uncertain_count = 0;
int sample_count = 0;

int sensorState=0;
String answer = "uncertain";

void setup() {
  Serial1.begin(9600);
  Serial.begin(9600);
  servo.attach(9);  // Attach servo signal to pin 9
  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960 sensor!");
  }

  pinMode(MotorCtrl_Pin, OUTPUT);
  digitalWrite(MotorCtrl_Pin, HIGH);
}

void loop() {
 if (APDS.proximityAvailable()){
    int proximity = APDS.readProximity();
    if(proximity<100){
      sensorState =1;
      }else{
         sensorState =0;
      }
}

   
  if (sensorState == 1 || inferencing == 1) {
    delay(1000);
    digitalWrite(MotorCtrl_Pin, LOW);
    inferencing =1;
    if (Serial1.available() > 0) {
      String command = Serial1.readStringUntil('\n');  // Read command from serial
      Serial.println(command);

      if (command.startsWith("ewaste")) {
        ewaste_count++;
      } else if (command.startsWith("plastic")) {
        plastic_count++;
      } else if (command.startsWith("Organice")) {
        organice_count++;
      } else if (command.startsWith("paper")) {
        paper_count++;
      } else if (command.startsWith("uncertain")) {
        uncertain_count++;
      }
      sample_count++;

      

      if (command.startsWith("ewaste")&& sample_count>=18) {
        answer="ewaste";
      } else if (command.startsWith("plastic")&&sample_count>=18) {
        answer="plastic";
      } else if (command.startsWith("Organice")&&sample_count>=18) {
       answer="Organice";
      } else if (command.startsWith("paper")&& sample_count>=18) {
        answer="paper";
      } else if (command.startsWith("uncertain")&&sample_count>=18) {
        
      }
      

      // Check if we've taken 20 samples
    }


    if (sample_count >= 20 ){
      // Determine which type has the highest count
      int max_count = ewaste_count;
      String most_frequent = "ewaste";

      if (plastic_count > max_count) {
        max_count = plastic_count;
        most_frequent = "plastic";
      }
      if (organice_count > max_count) {
        max_count = organice_count;
        most_frequent = "Organice";
      }
      if (paper_count > max_count) {
        max_count = paper_count;
        most_frequent = "paper";
      }

      // Print the most frequent type
      Serial.println("Most frequent: " + most_frequent);

      // Operate the servo based on the most frequent type
      if (answer.equals("Organice")) {
        servo.write(45);
      } else if (answer.equals("paper")) {
        servo.write(90);
      } else if (answer.equals("plastic")) {
        servo.write(135);
      } else {
        servo.write(180);
      }


      // Reset counts for next batch of samples
      ewaste_count = 0;
      plastic_count = 0;
      organice_count = 0;
      paper_count = 0;
      sample_count = 0;
      uncertain_count = 0;
      inferencing=0;
      digitalWrite(MotorCtrl_Pin, HIGH);
      delay(500);
    }
  }
}
