#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour convertir un nombre entier en chiffres romains
char* convertir_en_chiffres_romains(int nombre) {
    char *resultat = (char*)malloc(20 * sizeof(char)); // Pour stocker le nombre en chiffres romains
    strcpy(resultat, "");

    // Conversion des milliers
    int milliers = nombre / 1000;
    nombre %= 1000;
    for (int i = 0; i < milliers; ++i) {
        strcat(resultat, "M");
    }

    // Conversion des centaines
    int centaines = nombre / 100;
    nombre %= 100;
    strcat(resultat, convertir_chiffre_romain(centaines, 'C', 'D', 'M'));

    // Conversion des dizaines
    int dizaines = nombre / 10;
    nombre %= 10;
    strcat(resultat, convertir_chiffre_romain(dizaines, 'X', 'L', 'C'));

    // Conversion des unités
    strcat(resultat, convertir_chiffre_romain(nombre, 'I', 'V', 'X'));

    return resultat;
}