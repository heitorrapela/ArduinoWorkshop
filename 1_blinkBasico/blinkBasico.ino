/*
  Blink - Exemplo de codigo para piscar o led.  
*/
 
// Inicialmente o pino 13, eh o pino que ja tem na placa arduino
int led = 13;

// Funcao que eh chamada uma unica vez para inicializar alguns parametros importantes para o funcionamento do programa
void setup() 
{                
  // Inicializando o pino digital do led como saida
  pinMode(led, OUTPUT);     
}


// A funcao de loop, sera chamada sempre pelo programa, ela eh chamada infinitamente
void loop() 
{
  digitalWrite(led, HIGH);   // Acende o led (HIGH - Sinal de tensao ligado)
  delay(1000);               // Esperar 1 segundo, 1000 milissegundos
  digitalWrite(led, LOW);    // Desliga o led fazendo a tensao ser LOW
  delay(1000);               // Espera 1 segundo, 1000 milissegundos
}
