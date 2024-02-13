# Makefile

# Spécification de la cible par défaut
all: conversion_romaine

# Cible pour compiler les fichiers source en objets
conversion_romaine: convertir_chiffre_romain.o convertir_en_chiffres_romains.o main.o
	gcc convertir_chiffre_romain.o convertir_en_chiffres_romains.o main.o -o conversion_romaine

# Compilation du fichier source convertir_chiffre_romain.c
convertir_chiffre_romain.o: convertir_chiffre_romain.c
	gcc -c convertir_chiffre_romain.c -o convertir_chiffre_romain.o

# Compilation du fichier source convertir_en_chiffres_romains.c
convertir_en_chiffres_romains.o: convertir_en_chiffres_romains.c
	gcc -c convertir_en_chiffres_romains.c -o convertir_en_chiffres_romains.o

# Compilation du fichier source main.c
main.o: main.c
	gcc -c main.c -o main.o

# Cible pour nettoyer les fichiers objets et l'exécutable généré
clean:
	rm -f conversion_romaine *.o
