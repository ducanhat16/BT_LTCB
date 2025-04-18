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
    int j;
    for(i=0; i<10-1; i++)
    {
        for(j=i+1; j< 10; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("Sap xep theo thu tu tang dan ne: ");
    for(i=0; i< 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
