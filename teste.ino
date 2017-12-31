#define MotorA1 5
#define MotorA2 4

void setup() {
  pinMode(MotorA1,OUTPUT);
  pinMode(MotorA2,OUTPUT);
  //pinMode(MotorB1,OUTPUT);
  //pinMode(MotorB2,OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(MotorA1, HIGH);
  digitalWrite(MotorA2, LOW);
}

