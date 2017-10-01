#define LED_1 6
#define LED_2 7
#define LED_3 9
#define trig  2
#define echo  3

double dist = 0;

void setup() {
  // put your setup code here, to run once:

}
double read_ultrasonic(){
  digitalWrite(trig, LOW);
  delayMicroseconds(5);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  return pulseIn(echo, HIGH) / 2;
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  dist = read_ultrasonic() / 74;
Serial.println(dist);
  //turn off al LEDs
  digitalWrite(LED_1, LOW);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, LOW);
  if(dist < 3)
    digitalWrite(LED_1, HIGH);
  else if(dist < 5)
    digitalWrite(LED_2, HIGH);
  else
    digitalWrite(LED_3, HIGH);
  delay(500);
}
