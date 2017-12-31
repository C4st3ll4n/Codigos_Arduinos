int vLuz,luminosidade;

void luz(int tempo){
  vLuz = analogRead(5); 
  luminosidade = map(vLuz,0,1023,0,500);
  Serial.println(luminosidade);
  while(luminosidade >= 80){
    digitalWrite(6,luminosidade);
  }

}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 luz(100);
}
