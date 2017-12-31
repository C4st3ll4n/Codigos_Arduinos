#include <IRremote.h>

int RECV_PIN = 2;
float armazenavalor;
int led = LED_BUILTIN;
int ledx = 6;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ledx, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn(); // Inicializa o receptor IR
}

void loop()
{
  recebe();
}
