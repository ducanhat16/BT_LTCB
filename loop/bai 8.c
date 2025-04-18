#include <stdio.h>
#include <stdlib.h>

int main()
{   int a = 1;
    int n;
    scanf("%d", &n);
    int i;
    for(i=1;i<=n;i++) {
        a = a*i;
    }
    printf("%d", a);
    return 0;
}
