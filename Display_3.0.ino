char l;
String lf;
void setup() {
  Serial.begin(9600);
  for (int c = 2; c <= 13; c++) {
    pinMode(c, OUTPUT);
  }
}

void loop() {
  lf = "";
  controle();
}
