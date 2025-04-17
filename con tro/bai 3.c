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
    nhapmang(a);
    int i =0;
    int min = a[0];
    while(i<10)
    {
        if(min>a[i])
        {
            min = a[i];

        }
        i++;
    }
    int max = a[0];
    int j = 0;
    while (j<10)
    {
        if(max<a[j])
        {
            max = a[j];

        }
        j++;
    }
    printf("Gia tri lon nhat cua mang la: %d\n", max);
    printf("Gia tri nho nhat cua mang la: %d", min);
    return 0;
}
