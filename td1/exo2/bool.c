/*
    Documentation section
    @Project TD1
    @Author Stéphane Thiry
    @Created 20240802
    @Program Description
*/

#include <stdio.h>

int main() {
    // Déclaration des variables pour les notes et la moyenne
    float Nlv, Nf, Nm, Np;
    float moyenne;
    
    // Saisie des notes pour chaque matière
    printf("Entrez la note de langue vivante : ");
    scanf("%f", &Nlv);
    printf("Entrez la note de français : ");
    scanf("%f", &Nf);
    printf("Entrez la note de mathématiques : ");
    scanf("%f", &Nm);
    printf("Entrez la note de physique : ");
    scanf("%f", &Np);
    
    // Calcul de la moyenne
    moyenne = (Nlv + Nf + Nm + Np) / 4;
    
    // Définition des expressions logiques
    
    // 1) La moyenne des quatre notes est supérieure à 10
    int moyenneSup10 = moyenne > 10;
    
    // 2) Les notes de mathématiques et de français sont supérieures à la moyenne des quatre notes
    int Nm_Nf_SupMoyenne = Nm > moyenne && Nf > moyenne;
    
    // 3) Il y a au moins une note supérieure à 10
    int noteSup10 = Nlv > 10 || Nf > 10 || Nm > 10 || Np > 10;
    
    // 4) Toutes les notes sont supérieures à 10
    int toutesNotesSup10 = Nlv > 10 && Nf > 10 && Nm > 10 && Np > 10;
    
    // 5) La moyenne (10) est obtenue pour l'un des deux types (littéraire et scientifique)
    int moyenne10_litt_sci = (Nlv + Nf) / 2 == 10 || (Nm + Np) / 2 == 10;
    
    // 6) La moyenne des quatre notes est supérieure ou égale à 10 et la moyenne (10) est obtenue pour au plus l'un des deux types
    int moyenneSup10_max1Type = moyenneSup10 && ((Nlv + Nf) / 2 == 10) + ((Nm + Np) / 2 == 10) <= 1;
    
    // Affichage des résultats
    printf("1) La moyenne des quatre notes est supérieure à 10 : %d\n", moyenneSup10);
    printf("2) Les notes de mathématiques et de français sont supérieures à la moyenne des quatre notes : %d\n", Nm_Nf_SupMoyenne);
    printf("3) Il y a au moins une note supérieure à 10 : %d\n", noteSup10);
    printf("4) Toutes les notes sont supérieures à 10 : %d\n", toutesNotesSup10);
    printf("5) La moyenne (10) est obtenue pour l'un des deux types (littéraire et scientifique) : %d\n", moyenne10_litt_sci);
    printf("6) La moyenne des quatre notes est supérieure ou égale à 10 et la moyenne (10) est obtenue pour au plus l'un des deux types : %d\n", moyenneSup10_max1Type);
    
    return 0;
}
