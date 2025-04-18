#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a = 1,b=1,c = 0;
    for(i = 3; i<=n; i++)
    {
        c = a+b;
        b = a;
        a = c;
    }
    printf("%d", a);
    return 0;
}
