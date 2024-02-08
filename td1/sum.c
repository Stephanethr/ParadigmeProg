/*
    Documentation section
    @Project TD1
    @Author Stéphane Thiry
    @Created 20240802
    @Program Description, Program to compute the sum of a list of numbers
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Vérifie s'il y a au moins deux paramètres passés en ligne de commande
    if (argc < 3) {
        printf("Il faut au moins 2 paramètres :\n");
        printf("./sum param1 param2\n");
        return 1; // Quitte le programme avec un code d'erreur
    }

    int sum = 0; // Variable pour stocker la somme des entiers

    // Parcourt tous les arguments passés en ligne de commande
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]); // Convertit l'argument en entier
        // Vérifie si la conversion a réussi
        if (num == 0 && *argv[i] != '0') {
            // Affiche un message d'erreur si la conversion a échoué
            printf("Il y a un problème avec les arguments %d, %s. Ils n'ont pas pu être converti en int !\n", i, argv[i]);
            return 1; // Quitte le programme avec un code d'erreur
        }
        sum += num; // Ajoute l'entier converti à la somme totale
    }

    // Affiche la somme des entiers
    printf("%d\n", sum);
    return 0; // Quitte le programme avec succès
}
