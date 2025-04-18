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
    int x;
    printf("Nhap x di nguoi dep: ");
    scanf("%d", &x);
    int count = 0;
    for(i=0;i<10;i++) {
        if(a[i] == x) {
            count++;
        }
    }
    printf("Phan tu: %d xuat hien: %d lan trong mang", x,count);
    return 0;
}
