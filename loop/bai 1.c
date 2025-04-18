#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[100],total = 0;
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &n[i]);
    }
    for(i=0; i<10; i++)
    {
        total+=n[i];
    }
    printf("%d", total);
    return 0;
}
