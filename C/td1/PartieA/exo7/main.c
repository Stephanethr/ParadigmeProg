#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int nombre;

    // Saisie du nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Conversion en chiffres romains et affichage du résultat
    char *chiffres_romains = convertir_en_chiffres_romains(nombre);
    printf("Le nombre %d en chiffres romains est : %s\n", nombre, chiffres_romains);

    // Libération de la mémoire allouée pour les chiffres romains
    free(chiffres_romains);

    return 0;
}
