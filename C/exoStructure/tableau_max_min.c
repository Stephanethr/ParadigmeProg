#include <stdio.h>
#include <stdlib.h>

void get_min_max(double *tab, int size, double *min, double *max)
{
    for (int i = 1; i < size; i++)
    {
        if (tab[i] > *max)
        {
            *max = tab[i];
        }
        if (tab[i] < *min)
        {
            *min = tab[i];
        }
    }
}

struct double_pair
{
    double min;
    double max;
};

struct double_pair get_min_max_2(double *tab, int size, struct double_pair dp)
{
    for (int i = 1; i < size; i++)
    {
        if (tab[i] > dp.max)
        {
            dp.max = tab[i];
        }
        if (tab[i] < dp.min)
        {
            dp.min = tab[i];
        }
    }

    return dp;
}


int main()
{
    double tab[6] = {17.5, 6.2, 5.1, 2.3, 8.0, 9.1};
    double min = tab[0];
    double max = tab[0];
    get_min_max(tab, 6, &min, &max);
    printf("Max: %f\n", max);
    printf("Min: %f\n", min);
    struct double_pair dp = {tab[0], tab[0]};
    
    printf("min et max de la structure : %f , %f \n", dp.min, dp.max);
    return 0;
}