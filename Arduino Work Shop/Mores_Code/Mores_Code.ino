#define LED_PIN 7

int dot_time = 200;//dots last 100 ms

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(9600);
}
void dot()
{
  digitalWrite(LED_PIN, HIGH);
  delay(dot_time);
  digitalWrite(LED_PIN, LOW);
  delay(dot_time);  
}
void dash(){
  digitalWrite(LED_PIN, HIGH);
  delay(3 * dot_time);
  digitalWrite(LED_PIN, LOW);
  delay(dot_time);
}
void loop() {
  /* Print A in Mores Code */
  dot();
  dash();
  delay(300);
  /* Print B */
  dash();
  dot();
  dot();
  dot();
  delay(300);
  /* print C */
  dash();
  dot();
  dash();
  dot();
  delay(300);
}
