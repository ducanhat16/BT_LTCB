#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    printf("Nhap mang di nguoi dep: ");
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Mang cua nguoi dep la: ");
    for(i=9; i>=0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
