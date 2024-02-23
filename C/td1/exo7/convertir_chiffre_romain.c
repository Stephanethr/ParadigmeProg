#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour convertir un chiffre en chiffres romains
char* convertir_chiffre_romain(int chiffre, char symbole_1, char symbole_5, char symbole_10) {
    char *chiffres_romains[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char *resultat = (char*)malloc(10 * sizeof(char)); // Pour stocker le chiffre romain
    strcpy(resultat, "");

    if (chiffre <= 3) {
        for (int i = 0; i < chiffre; ++i) {
            strcat(resultat, "I");
        }
    } else if (chiffre == 4) {
        strcat(resultat, "IV");
    } else if (chiffre <= 8) {
        strcat(resultat, "V");
        for (int i = 0; i < chiffre - 5; ++i) {
            strcat(resultat, "I");
        }
    } else { // chiffre == 9
        strcat(resultat, "IX");
    }

    return resultat;
}
