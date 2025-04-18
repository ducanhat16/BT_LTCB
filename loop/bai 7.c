#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    double S = 0;
    scanf("%lf", &n);
    int i;
    for(i=1;i<=n;i++) {
    S+=1.0/i;
    }
    printf("%f", S);
    return 0;
}
