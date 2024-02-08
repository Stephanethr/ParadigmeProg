#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *pt_int = NULL;
    *pt_int = 10;
    printf("%p\n",pt_int);
    printf("%d\n",*pt_int);
    return 0;
}