
void setup() {
  pinMode(A7,INPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
Serial.println(analogRead(A7));
if(analogRead(A7)>300)
{
  digitalWrite(13, HIGH);
  
}
 delay(10);
 
  digitalWrite(13, LOW);

}
