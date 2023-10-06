Military Detection System using Arduino

Description
This project is designed to create a simple military detection system using an Arduino Uno, an HC-SR04 Ultrasonic Sensor, a Servo Motor, and various LEDs and a buzzer. The system rotates a servo motor from 0 to 180 degrees while continuously checking for objects using the ultrasonic sensor. When an object is detected within a specified range, it activates a red LED and a buzzer. If no object is detected within that range, a green LED is turned on.

Components
Arduino Uno
Breadboard
HC-SR04 Ultrasonic Sensor
Servo Motor
Green LED
Red LED
Buzzer

Connection Guide
HC-SR04 Ultrasonic Sensor:
Trig pin connected to Arduino pin 9
Echo pin connected to Arduino pin 8

Servo Motor:
Signal pin connected to Arduino pin 10

Red LED:
Connected to Arduino pin 4

Green LED:
Connected to Arduino pin 5

Buzzer:
Connected to Arduino pin 3

Usage
Upload the provided Arduino code to your Arduino Uno.
Connect the components according to the Connection Guide mentioned above.
Power up the Arduino Uno.

Functionality
The servo motor rotates continuously from 0 to 180 degrees and back.
The ultrasonic sensor measures the distance to objects in front of it.
If an object is detected within a specified range (default is 20 centimeters), the system activates the red LED and the buzzer.
If no object is detected within the specified range, the system activates the green LED.

Customization
You can adjust the detection range by modifying the if (distance < 20) condition in the Arduino code.
Modify the delay values in the servo rotation loop to change the servo motor's speed.

Author
Shashank J (PG Scholar, Master of Computer Application)

License
This project is open-source and available under the MIT License.