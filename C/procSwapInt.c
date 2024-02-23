#include <stdio.h>


int swap_int(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
    return 0;
}

int main()
{
    int a = 20;
    int b = 10;
    printf("a = %d, b = %d, AVANT SWAP\n", a, b);
    swap_int(&a, &b);
    printf("a = %d, b = %d, APRES SWAP\n", a, b);
    return 0;
}