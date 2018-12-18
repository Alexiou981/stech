// * Ultrasonic Sensor HC-SR04 and Arduino Tutorial
// *
// * by Dejan Nedelkovski,
// * edited by Evangelos Alexiou - 1618795
// defines pins numbers

const int val00 = A2; // sensor 01
const int val01 = A3; // sensor 02
const int trigPin = 9;
const int echoPin = 10;
// defines variables
long duration;
int distance;
int xPin = A0;
int yPin = A1; 
int butonPin = 2; 
int xPosition = 0;
int yPosition = 0;
int Switch = 0;

void setup() 
{
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(butonPin, INPUT_PULLUP);
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
}

void loop() {
xPosition = analogRead(xPin);
xPosition = map(xPosition, 0, 1023, 0, 200);
yPosition = analogRead(yPin);
yPosition = map(yPosition, 0, 1023, 0, 200);
Switch = digitalRead(butonPin);
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
//distance = map(distance, 0, 2180, 100, 500);

Serial.print(xPosition);
Serial.print(",");
Serial.print(yPosition);
Serial.print(",");
Serial.print(Switch);
Serial.print(",");
Serial.print(distance);
Serial.print(",");
Serial.print(analogRead(val00));
Serial.print(",");
Serial.println(analogRead(val01));



delay(100);
}


 
