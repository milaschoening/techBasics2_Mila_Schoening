
const int buttonPin = 2; 
int state = 0;  // variable for reading the push button status

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // read the state of the pushbutton value:
  state = digitalRead(buttonPin);
  Serial.println(state);
}
