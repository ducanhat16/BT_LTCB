#include <stdio.h>
#include <stdlib.h>

int main()
{
    double pi  = 3.14159265359;
    int r;
    scanf("%d", &r);
    printf("S = %f\n", 4*pi*r*r);
    printf("v = %f\n", (4.0/3.0)*pi*r*r*r);
    return 0;
}
