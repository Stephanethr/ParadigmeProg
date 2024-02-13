#include <stdio.h>

// Fonction de chiffrement
void chiffrer_mot(char *mot, int cle) {
    for (int i = 0; mot[i] != '\0'; ++i) {
        if (mot[i] >= 'a' && mot[i] <= 'z') {
            mot[i] = 'a' + (mot[i] - 'a' + cle) % 26;
        } else if (mot[i] >= 'A' && mot[i] <= 'Z') {
            mot[i] = 'A' + (mot[i] - 'A' + cle) % 26;
        }
    }
}

int main() {
    char mot[100];
    int cle;

    // Saisie du mot et de la clé
    printf("Entrez le mot à chiffrer : ");
    scanf("%s", mot);
    printf("Entrez la clé de chiffrement : ");
    scanf("%d", &cle);

    // Chiffrement du mot
    chiffrer_mot(mot, cle);

    // Affichage du mot chiffré
    printf("Le mot chiffré est : %s\n", mot);

    return 0;
}
