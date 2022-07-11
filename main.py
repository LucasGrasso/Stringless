import csv
import serial
import multiprocessing
import winsound
import os

notas = {}

with open('notes.csv', mode='r') as file:
    reader = csv.reader(file)
    notas = {rows[0]:rows[1] for rows in reader}

keys = notas.keys()

serialPort = serial.Serial(port = "COM3", baudrate=9600,
                           bytesize=8, timeout=2, stopbits=serial.STOPBITS_ONE)

while(True):
    if(serialPort.in_waiting > 0):
        # Read data out of the buffer until a carraige return / new line is found
        serialString = serialPort.readline().decode("utf-8")
        serialString = serialString[0:-2]

        #print(serialString)
        # Convert binary string to int
        parsedInt = int(serialString,2)
        strParsedInt = str(parsedInt)
        
        if(strParsedInt in keys):
            
            # Play note
            winsound.PlaySound(notas[strParsedInt], winsound.SND_FILENAME|winsound.SND_ASYNC) 

            print(notas[strParsedInt])