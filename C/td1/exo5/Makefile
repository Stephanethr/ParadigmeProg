# Makefile

# Spécification de la cible par défaut
all: compile_preprocess

# Cible pour compiler et arrêter après l'étape de préprocessing
compile_preprocess:
	gcc -E macroFunc.c -o macroFunc_preprocessed.c

# Cible pour compiler complètement le programme
compile:
	gcc macroFunc.c -o macroFunc

# Cible pour nettoyer les fichiers générés
clean:
	rm -f macroFunc macroFunc_preprocessed.c
