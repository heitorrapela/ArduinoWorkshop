// liberando o pino 13
int led = 13;

void setup()  
{
  // Setando o pino como saida
  pinMode(led, OUTPUT);
  // Abre a comunicacao serial da USB
  Serial.begin(9600);

}

void loop()
{
      // criando a variavel que vai armazenar o valor vindo da serial, a leitura eh feita por bytes
      char c = '0';

      // se a serial estiver ok, entao pode fazer a leitura
      if (Serial.available() > 0) {
              // ler os dados que esta vindo da serial
              c = Serial.read();

              O valor vindo da serial eh impresso no monitor
              Serial.print("I received: ");
              Serial.println(c);
              
              Se o valor for 1, entao faz o blink
              if(c == '1')
              {
                digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
                delay(1000);               // wait for a second
                digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
                delay(1000);
              }  

              // Esta parte do codigo, deve ser alterada para fazer um botao de ligar e outro de desligar
              if(c == '2')
              {
                digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
              }  
      }
}

