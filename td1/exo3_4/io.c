/*
    Documentation section
    @Project TD1
    @Author Stéphane Thiry
    @Created 20240802
    @Program Description, input/output functions
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ageLu;
    printf("Quel âge avez-vous ? ");
    scanf("%d",&ageLu);
    printf("Vous avez %d ans\n",ageLu);

    char carac[3];
    printf("Entrez 3 caractères : ");
    scanf("%s",carac);
    printf("Vous avez entré : %s\n",carac);

    return 0;
}
