#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    printf("Nhap mang di nguoi dep: ");
    int i;
    for(i=0; i< 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i< 10; i++)
    {
        if(a[i] <0)
        {
            a[i] = 0;
        }
    }
    printf("Mang moi ne nguoi dep: ");
    for(i=0; i< 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
