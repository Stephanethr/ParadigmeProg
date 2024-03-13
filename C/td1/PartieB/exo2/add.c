#include <stdio.h>

void add(int a, int b, int *c){
    *c = a + b;
}

int main() {
    int a = 2, b = 3, c = 0;
    add(a, b, &c);
    printf("Addition de a + b = %d\n",c );
    return 0;
}