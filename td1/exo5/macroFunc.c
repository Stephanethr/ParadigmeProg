#include <stdio.h>

// Définition de la macro pscanf()
#define pscanf(message, format, variable) \
    printf("%s", message); \
    scanf(format, &(variable));

int main() {
    int age;
    float poids;
    
    // Utilisation de la macro pscanf()
    pscanf("Quel est votre âge ? ", "%d", age);
    pscanf("Quel est votre poids en kg ? ", "%f", poids);
    
    // Affichage des données saisies
    printf("Vous avez %d ans et vous pesez %.2f kg\n", age, poids);
    
    return 0;
}
