/*
  LDR Input (Codigo exemplo) *  This example code is in the public domain.
  Leitura analogica do pino A0, convertendo a tensao, e imprimindo o resultado na serial.
*/

// Funcao chamada para inicializacao de alguns parametros de funcionamento, como a serial
void setup() 
{
  // Inicializacao da serial com baudrate (velocidade de transferencia de 9600 bits por segundo)
  Serial.begin(9600);
}

// Funcao que fica rodando infinitamente...
void loop() {
  // Leitura do valor da porta A0, e salvando na variavel sensorValue
  // Pinos de leitura analogicos, nao precisam ser inicializados no setup
  int sensorValue = analogRead(A0);
  
  // Imprimindo o valor de saida da leitura do pino A0
  Serial.println(sensorValue);
}
