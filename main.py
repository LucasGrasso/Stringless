import csv
import serial
import pygame

pygame.init()
pygame.mixer.init()

notes = {}

with open('notes.csv', mode='r') as file:
    reader = csv.reader(file)
    # "Int of conveted binary string representing One-Hot encoding of the input : pygame.Sound object created with each path of note audio file"
    notes = {rows[0]: pygame.mixer.Sound(rows[1]) for rows in reader}

keys = notes.keys()

serialPort = serial.Serial(port = "COM3", baudrate=9600,
                           bytesize=8, timeout=2, stopbits=serial.STOPBITS_ONE)
                    
while True :
    try: 
        if(serialPort.in_waiting > 0):
            
            serial_string = serialPort.readline().decode("utf-8")
            serial_string = serial_string[0:-2]

            
            # Convert binary string from serial port to int
            parsed_int = int(serial_string,2)

            #Convert int to string to check if key exists
            str_parsed_int = str(parsed_int)
            
            if str_parsed_int in keys:  #Avoid Key Error
                # Play note
                note = notes[str_parsed_int]
                note.play()
    except Exception as e:
        print(e)
