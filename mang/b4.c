#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10];
    int vitrimin = 0;
    int max = 0, min = 0;
    printf("Nhap mang di nguoi dep: ");
    int i;
    for(i=0; i< 10; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    for(i=1; i< 10; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            vitrimin = i;
        }
    }
    printf("Phan tu be nhat cua mang la: %d - Vi tri thu: %d\n", min, vitrimin+1);
    max = a[0];
    for(i=1; i< 10; i++)
    {
        if(a[i] > max)
        {
            min = a[i];
            vitrimin = i;
        }
    }
    printf("Phan tu lon nhat cua mang la: %d - Vi tri thu: %d\n", min, vitrimin+1);

    return 0;
}
