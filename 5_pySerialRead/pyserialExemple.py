#	conda install pyserial
#	ou pip install pyserial

# importando a lib necessaria para comunicacao serial com arduino
import serial

# liberando a porta serial ("coloque o valor da sua porta serial")
ser = serial.Serial('/dev/ttyACM1', 9600)

# sempre ficar lendo o valor da serial e imprimindo o que tiver para ser lido da serial
while True:
	print ser.readline()
