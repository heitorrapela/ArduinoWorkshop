/*
	Mudar o valor do estado do Led de acordo com o valor do LDR
	O Led pode ser setado para blinkar quando o LDR atingir algum valor especifico ou
	pode fazer um Fade
*/

// Setando o pino digital para ser o ledPin
int ledPin = 10;

// Criando a variavel de threshold para filtrar os valores do LDR
int threshold = 500;


// Funcao setup, para inicializar alguns parametros
void setup()
{
	// Setando o pino do led como saida
	pinMode(ledPin, OUTPUT);
	// Liberando a comunicacao serial, para velocidade de 9600
	Serial.begin(9600);

}

// Funcao que fica rodando enquanto o arduino estiver ligado
void loop()
{
	// salvando o valor da porta A0, que esta o LDR na variavel ldrValue
	int ldrValue = analogRead(A0);

	// imprime na tela serial o valor lido do LDR
	Serial.print("Valor lido: ");
	Serial.println(ldrValue);

	// Vendo se o ldrValue esta dentro ou nao do threshold para ativar o led
	if(ldrValue >= threshold)
	{
		// Acender o LED
		digitalWrite(ledPin,HIGH);
	} 
	else
	{
		// Apagar o LED
		digitalWrite(ledPin,LOW);
	}

}