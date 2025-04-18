#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x;
    scanf("%u", &x);
    printf("%X\n", x);
    printf("%o\n", x);
    int i;
    int b;
    for(i = 31; i>=0; i--1)
    {
        unsigned int a = (x>>i) &1;
        printf("%u", a);
    }

    return 0;
}
