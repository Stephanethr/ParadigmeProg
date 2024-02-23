#include <stdio.h>
#include <stdlib.h>

int empoisonner(int *ptPerso, int *ptPoison)
{
    if (*ptPerso <= 0)
    {
        return 1;
    }
    *ptPerso = *ptPerso - *ptPoison;
    *ptPoison = *ptPoison - 1;
    if (*ptPoison == 0)
    {
        *ptPoison = rand() % 20 + 1;
    }
    return 0;
}

int main()
{
    int perso = 100;
    int poison = 10;
    while (poison > 0)
    {
        printf("Perso = %d, Poison = %d\n", perso, poison);
        int res = empoisonner(&perso, &poison);
        if (res == 1)
        {
            printf("Le perso est mort\n");
            break;
        }
    }
}