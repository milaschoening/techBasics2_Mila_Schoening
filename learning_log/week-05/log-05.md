# 10.11.2026
### Class Notes:
- Servo motor: a motor that can be controlled to move to a specific position
- Positional servo (the one we used): moves to a specific angle, usually between 0° and 180°. The signal controls its position
- Continuous servo: rotates continuously, the signal controls its speed rather than a specific position
- Servo library: Arduino library used to control servo motors (#include <Servo.h>)
- Joystick: combines two potentiometers to control movement along the X- and Y-axes, as well as a push button

### Exercise 1: Control a Servo Motor
- connect and control a servo motor using the Arduino Servo Library
<img width="1179" height="1361" alt="servomotor" src="https://github.com/user-attachments/assets/88602aa6-90c7-4301-83e1-814fa7e6ca59" />
  
### Exercise 2: Control a Servo with a potentiometer
- use analogRead() to read the potentiometer value
- use map() to convert the reading into an angle for the servo
- control the servo's position by turning the potentiometer
<img width="2647" height="3342" alt="servopotentiometer" src="https://github.com/user-attachments/assets/37138fbe-e258-4c61-95f2-87fa6e7b5134" />



### Exercise 3: Joystick
- read the analog values from A0 and A1, and the digital value from pin 2
- display the readings in the Serial Monitor
- use INPUT_PULLUP for the joystick button

### Exercise 4: Joystick and two Servos
- connect two servos to together, with one controlling the X-axis and the other the Y-axis
- use the joystick to control both servos
- press the joystick button to return both servos to the center position
https://github.com/user-attachments/assets/443f15e3-5363-4d19-9634-5227d8711d1a
