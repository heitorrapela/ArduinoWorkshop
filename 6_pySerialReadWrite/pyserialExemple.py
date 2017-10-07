#	conda install pyserial
#	ou pip install pyserial
# https://www.python-course.eu/tkinter_buttons.php
# Adicionando button
# importando a lib necessaria para comunicacao serial com arduino
# python 3.0 > tkinter   /// python 2.7 < Tkinter

import serial
from Tkinter import *

# liberando a porta serial ("coloque o valor da sua porta serial")
ser = serial.Serial('/dev/ttyACM1', 9600)

class App:
  def __init__(self, master):
    frame = Frame(master)
    frame.pack()
    self.button = Button(frame, 
                         text="QUIT", fg="red",
                         command=quit)
    self.button.pack(side=LEFT)
    self.slogan = Button(frame,
                         text="Blink Led",
                         command=self.write_slogan)
    self.slogan.pack(side=LEFT)
  def write_slogan(self):
    print("Blink Led!")
    ser.write('1')


root = Tk()
app = App(root)
root.mainloop()

'''
 self.slogan = Button(frame,
                         text="On",
                         command=self.on)
    self.slogan.pack(side=LEFT)


  def on(self):
	print("Always ON!")
	ser.write('2')
'''