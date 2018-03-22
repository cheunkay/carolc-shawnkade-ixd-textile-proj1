/*
  Light-up distance sensor

  Reading data from the ping/ultrasonic sensor. By measuring arbitrarily
  set distance, white light emitting diodes (LEDs) turn on one after the other
  when an object comes into close proximity with the sensor. When an object 
  goes out of the set distance, LEDs turn off one after the other.

  The circuit:
  - ping/ultrasonic sensor
    connected to digital pin 12
  - LEDs x 6
    anode (long leg) attached to digital pin 2-7
    cathode (short leg) attached to ground

  available at instructables, posted by jreeve17, March 9, 2013
  modified March 1, 2018
  By Carol Cheung, Shawn Kadawathage

  http://www.instructables.com/id/How-to-make-A-light-up-distance-sensor/
*/

const int pingPin = 12; //setup pingpin as 12

void setup() {
  Serial.begin(9600);
pinMode(2, OUTPUT); // set up these pins as outputs
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);


digitalWrite(2, HIGH);
digitalWrite(3, HIGH);  // function to let you know it is ready
digitalWrite(4, HIGH);
digitalWrite(5, HIGH);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
delay (500);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, LOW);
}
void loop()
{
 
  long duration, inches, cm;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(pingPin, INPUT);
  duration = pulseIn(pingPin, HIGH);

  // convert the time into a distance
  inches = microsecondsToInches(duration);

 
if (inches < 30) {
   digitalWrite(2, HIGH); }  //these numbers give the distances needed to turn lights on or off
if (inches > 30) {           //change these to chang thedistances
   digitalWrite(2, LOW); }
  
if (inches < 27) {
  digitalWrite(3, HIGH);}
if (inches > 27) {
  digitalWrite(3, LOW);}
 
if (inches < 24) {
  digitalWrite(4, HIGH);}
if (inches > 24) {
  digitalWrite(4, LOW);}
 
if (inches < 21) {
    digitalWrite(5, HIGH);}
if (inches > 21)  {
    digitalWrite(5, LOW);}
   
if (inches < 18) {
    digitalWrite(6, HIGH);}
if (inches > 18) {
    digitalWrite(6, LOW);}
   
if (inches < 15) {
    digitalWrite(7, HIGH);}
if (inches > 15) {
    digitalWrite(7, LOW);}

if (inches < 12) {
    digitalWrite(8, HIGH);}
if (inches > 12) {
    digitalWrite(8, LOW);}

if (inches < 9) {
    digitalWrite(9, HIGH);}
if (inches > 9) {
    digitalWrite(9, LOW);}
 
  delay(100);
}

long microsecondsToInches(long microseconds)
{
  
}
