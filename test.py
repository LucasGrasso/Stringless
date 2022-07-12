import csv
import pygame
import time

pygame.init()
pygame.mixer.init()
clock = pygame.time.Clock()

notas = {}

with open('notes.csv', mode='r') as file:
    reader = csv.reader(file)
    notas = {rows[0]:rows[1] for rows in reader}

keys = notas.keys()

for key in keys:
    # Play note
    note = notas[key]
    SOUND = pygame.mixer.Sound(note)
    SOUND.play() 
    print(note.split("/")[1].split(".")[0].replace("S", "#"))
    time.sleep(1/9)