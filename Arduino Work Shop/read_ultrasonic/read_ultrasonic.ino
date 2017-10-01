#define ECHO 2
#define TRIG 3
double pulse_time = 0;
double in = 0;
double cm = 0;
/*  
 *  Read the distance reading by
 *  an ultrasonic sensor and 
 *  print the reading in in, cm
 */
double
read_ultrasonic(int ech, int trig)
{
 digitalWrite(trig, LOW);
 delayMicroseconds(5);
 digitalWrite(trig, HIGH);
 delayMicroseconds(10);
 digitalWrite(trig, LOW);

  return pulseIn(ECHO, HIGH) / 2;
  /*
   * Return time / 2 because the pulse 
   *traveles to the object and backe
   */
}
void
setup()
{
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  Serial.begin(9600);
}
void 
loop()
{
  pulse_time = read_ultrasonic(ECHO, TRIG);

  cm = pulse_time / 29.1;
  in = pulse_time / 74;

  Serial.print("in");
  Serial.print(in);
  Serial.print(" cm: ");
  Serial.println(cm);

  delay(5 * 1000);
}
