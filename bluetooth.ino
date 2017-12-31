#include <SoftwareSerial.h>       //Biblioteca que simula pinos digitais como pinos de comunicação TX e RX

SoftwareSerial bluetooth(10,11);  //Instanciamento do objeto "bluetooth"

String comando;                   // String que irá recolher os comandos enviados (pode ser via SoftwareSerial(No nosso caso o bluetooth) ou via COM)

void setup(){
  bluetooth.begin(9600);          // Inicialização da comunicação do buetooth
  Serial.begin(9600);             // Inicialização da porta serial
  pinMode(12, OUTPUT);             // Definição do pino digital 3 (onde está um led RGB para teste) como pino de saída (Output, em inglês)
}

void loop() {

  comando = "";                   // Definindo a string comando como vazia

  if(bluetooth.available()){      // Caso o bluetooth esteja disponivel (Available, em inglês) o código será desviado para esse bloco 
    while(bluetooth.available()){ // Enquanto ele estiver disponível
      char c = bluetooth.read();  // A váriavel c irá ler o que foi enviado
      comando += c;               // E então a váriavel comando irá recebendo caracter por caracter
      delay(10);                  // Um pequeno atraso (Delay, em inglês) para evitar erros
    }                             // Após a leitura do que foi digitado, testes condicionais serão realizados
    bluetooth.print("Comando: "); // Imprime para os canais de comunicação do bluetooth a informação que o Arduino recebeu
    bluetooth.println(comando);   // Mostra o comando enviado

    Serial.print("Comando: ");    // Imprime para os canais de comunicação do COM a informação que o Arduino recebeu
    Serial.println(comando);      // Mostra o que foi enviado
    
    // Váriaveis do tipo inteiro (int) irão verificar se na string que foi recebida existe uma determinada letra (char) que irá desencadear uma determinada função
    // Caso a letra (char) exista, a váriavel irá receber o indice, ou seja, onde ela está armazenada, caso a letra não exista a váriavel recebe o valor -1, significa que a letra não foi encontrada.
    int cx = comando.indexOf("x"); // Verifica se na váriavel comando existe a letra X, que tem a função de PARAR
    int cw = comando.indexOf("w"); // Verifica se na váriavel comando existe a letra X, que tem a função de IR PARA A FRENTE ( ACELERAR )
    char ca = comando.indexOf("a"); // Verifica se na váriavel comando existe a letra X, que tem a função de IR PARA A ESQUERDA
    char cs = comando.indexOf("s"); // Verifica se na váriavel comando existe a letra X, que tem a função de IR PARA TRÁS ( RÉ )
    char cd = comando.indexOf("d"); // Verifica se na váriavel comando existe a letra X, que tem a função de IR PARA A DIREITA
    char cq = comando.indexOf("q"); // Verifica se na váriavel comando existe a letra X, que tem a função de GIRAR NO SENTIDO ANTI-HORÁRIO
    char ce = comando.indexOf("e"); // Verifica se na váriavel comando existe a letra X, que tem a função de GIRAR NO SENTIDO HORÁRIO
    char cz = comando.indexOf("z"); // Verifica se na váriavel comando existe a letra X, que tem a função de LIGAR/DESLIGAR os leds
    char cb = comando.indexOf("b"); // Verifica se na váriavel comando existe a letra X, que tem a função de BUZINAR
    char cp = comando.indexOf("p"); // Verifica se na váriavel comando existe a letra X, que tem a função de PISCAR os leds
    
      if(cx >= 0){  
        digitalWrite(12,!digitalRead(12));
     }if(cw >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(ca >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(cs >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(cd >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(cq >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(ce >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(cz >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(cb >= 0){
        digitalWrite(12,!digitalRead(12));
     }if(cp >= 0){
        digitalWrite(12,!digitalRead(12));
     }
     
      if(digitalRead(12)){
        bluetooth.println("Led LIGADO!");
        Serial.println("Led LIGADO!");
      }
      else{
        bluetooth.println("Led DESLIGADO!");
        Serial.println("Led DESLIGADO!");
      }
      
      
  }
}
