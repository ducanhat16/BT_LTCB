#include <stdio.h>
#include <stdlib.h>
void nhapmang(int *a)
{
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
}
int main()
{
    int a[10];
    printf("Nhap mang: ");
    nhapmang(a);
    int i;
    printf("In mang: ");
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
