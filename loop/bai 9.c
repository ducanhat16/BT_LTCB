#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n,a = 1, s = 0;
    scanf("%lf", &n);
    int i;
    int j;
    for(i=1; i<=n; i++)
    {
        a*=i;
        s+= 1/a;
    }
    printf("%f", s);
    return 0;
}
