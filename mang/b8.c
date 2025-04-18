#include <stdio.h>
#include <stdlib.h>
void sapxep(int a[])
{
    int j;
    int i;
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
}
int main()
{
    int a[10];
    int b[10];
    printf("Nhap mang 1 di nguoi dep: ");
    int i, j, k;
    for(i=0; i< 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Nhap mang 2 di nguoi dep: ");
    for(i=0; i< 10; i++)
    {
        scanf("%d", &b[i]);
    }
    sapxep(a);
    sapxep(b);
    int combine[20];
    i = 0;
    j = 0;
    k = 0;
    while (i < 10 && j < 10) {
        if (a[i] < b[j]) {
            combine[k++] = a[i++];
        } else {
            combine[k++] = b[j++];
        }
    }
    while (i < 10) {
        combine[k++] = a[i++];
    }


    while (j < 10) {
        combine[k++] = b[j++];
    }
    printf("Mang sau khi gop va sap xep: ");
    for (i = 0; i < 10 * 2; i++) {
        printf("%d ", combine[i]);
    }
    printf("\n");

    return 0;
}
