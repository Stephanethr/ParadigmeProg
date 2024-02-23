#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 20;
    int b = 10;
    printf("a = %d, b = %d\n, AVANT SWAP\n", a, b);
    void *pta, *ptb, *ptc = NULL;

    pta = &a;
    ptb = &b;
    ptc = malloc(sizeof(int));

    // Swap the values of a and b using pointers
    if (ptc != NULL)
    {
        *((int *)ptc) = *((int *)pta);
        *((int *)pta) = *((int *)ptb);
        *((int *)ptb) = *((int *)ptc);
    }
    else
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("a = %d, b = %d\n, APRES SWAP\n", a, b);

    free(ptc);
    return 0;
}