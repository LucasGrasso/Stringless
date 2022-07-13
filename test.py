import csv
import pygame
import time

pygame.init()
pygame.mixer.init()
clock = pygame.time.Clock()

notas = {}

with open('notes.csv', mode='r') as file:
    reader = csv.reader(file)
    notas = {rows[0]: pygame.mixer.Sound(rows[1]) for rows in reader}

keys = notas.keys()

for key in keys:
    while True:
        # Play note
        note = notas[key]
        note.play()
        time.sleep(1/1000)