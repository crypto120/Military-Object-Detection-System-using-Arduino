#include <Servo.h>

Servo myservo;  // Create a servo object

const int trigPin = 9;    // Trigger pin of the Ultrasonic Sensor
const int echoPin = 8;    // Echo pin of the Ultrasonic Sensor
const int redLedPin = 4;  // Red LED pin
const int greenLedPin = 5; // Green LED pin
const int buzzerPin = 3;  // Buzzer pin

long duration;
int distance;

void setup() {
  myservo.attach(10);  // Attaches the servo on pin 10 to the servo object
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(greenLedPin, HIGH); // Initialize with green LED on
}

void loop() {
  // Rotate the servo from 0 to 180 degrees
  for (int angle = 0; angle <= 180; angle++) {
    myservo.write(angle);
    delay(5); // Adjust the delay for servo speed
    checkDistance();
  }
  
  // Rotate the servo from 180 to 0 degrees
  for (int angle = 180; angle >= 0; angle--) {
    myservo.write(angle);
    delay(5); // Adjust the delay for servo speed
    checkDistance();
  }
}

void checkDistance() {
  // Trigger the Ultrasonic Sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure the time it takes for the pulse to return
  duration = pulseIn(echoPin, HIGH);

  // Calculate distance in centimeters
  distance = duration * 0.034 / 2;

  // Check if an object is detected within a certain range (adjust as needed)
  if (distance < 20) { // You can adjust this threshold as needed
    digitalWrite(redLedPin, HIGH);  // Turn on the red LED
    digitalWrite(greenLedPin, LOW); // Turn off the green LED
    digitalWrite(buzzerPin, HIGH);  // Turn on the buzzer
  } else {
    digitalWrite(redLedPin, LOW);   // Turn off the red LED
    digitalWrite(greenLedPin, HIGH); // Turn on the green LED
    digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
  }
}
