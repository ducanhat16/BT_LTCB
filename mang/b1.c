#include <stdio.h>

int main()
{
    int a[10];
    int i;
    printf("Nhap mang di nguoi dep: ");
    for(i=0; i<10; i++)
    {

        scanf ("%d", &a[i]);
    }
    printf("Mang cua nguoi dep la: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
