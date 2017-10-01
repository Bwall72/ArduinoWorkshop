#define LED_PIN 7

int dot_time = 200;//dots last 100 ms
char x;

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
void printA(){
    /* Print A in Mores Code */
  dot();
  dash();
  delay(300);
}
void printB(){
  /* Print B */
  dash();
  dot();
  dot();
  dot();
  delay(300);  
}
void printC(){
  /* print C */
  dash();
  dot();
  dash();
  dot();
  delay(300);
}
void loop() {
  Serial.print("Enter a character: ");
  x = -1;
  while(x == -1)
    x = Serial.read();
  Serial.println(x);
  if(x == 'a')
    printA();
  else if(x == 'b')
    printB();
  else if(x == 'c')
    printC();
}
