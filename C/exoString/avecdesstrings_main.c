#include <stdio.h>
#include <string.h>

int get_string_length(char texte)
{
    return 1;
}

void reverse_string(char *tab)
{
}

void copy_string(char *tab1, char *tab2)
{
    int tab1_size = *tab1; //size
    int tab2_size = *tab2; //size
    if (tab1_size == tab2_size)
    {
        for (int i = 0; i < tab1_size; i++){
            tab2[i] = tab1[i];
        }
    }
}

int main(int argc, char const *argv[])
{
    char chaine[] = {'e', 's', 's', 'a', 'i', '\0'};
    char chaine_nonfinie[] = {'e', 's', 's', 'a', 'i'};
    char tab_char[25] = "Bonjour\n";
    char tab_copie[25];
    printf("La taille du tableau est : %i\n", (int)sizeof(tab_char));
    printf("La taille de la chaine \"Bonjour\\n\" stockée dans le tableau est : %i\n", (int)sizeof("Bonjour\n"));
    printf("La chaine finie contient %s\n", chaine);
    printf("La chaine non finie contient %s\n", chaine_nonfinie);
    char texte[] = "Chaine de test !";

    printf("Le nombre de caracteres constituant la chaine %s est %d\n", texte, get_string_length(texte));
    printf("Le nombre de caracteres constituant la chaine %s est %lu\n", texte, strlen(texte));

    printf("La chaine avant renversement est %s\n", texte);
    reverse_string(texte);
    printf("Et apres renversement en place %s\n", texte);

    copy_string(tab_char, tab_copie);
    printf("La chaine apres copie est %s\n", tab_copie);

    return 0;
}
