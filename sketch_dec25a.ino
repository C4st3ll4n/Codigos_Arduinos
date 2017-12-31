int vLuz,luminosidade;

void luz(int tempo){
  vLuz = analogRead(5);
  
  luminosidade = map(vLuz,0,1023,0,260);
  Serial.println(luminosidade);
  
  if(luminosidade <= 140){
    analogWrite(6,LOW);
  }
  else if(luminosidade > 140 and luminosidade < 210 ){
    analogWrite(6,HIGH);
  }
  else{
    analogWrite(6,luminosidade);
  }
    
  delay(tempo);
}
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 luz(500);
}
