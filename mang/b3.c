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
    float count_duong = 0, count_am= 0;
    float phan_tu_duong = 0, phan_tu_am;
    for(i=0; i<10; i++)
    {
        if(a[i] < 0)
        {
            count_am+=a[i];
            phan_tu_am++;
        }
        else
        {
            if(a[i] > 0)
            {
                count_duong += a[i];
                phan_tu_duong++;
            }
        }
    }
    printf("Trung binh cong cua ca mang: %f\n", ((count_am+count_duong)/10));
    printf("Trung binh cong cua cac so nguyen am: %f\n", count_am/phan_tu_am);
    printf("Trung binh cong cua cac so nguyen duong: %f\n", count_duong/phan_tu_duong);
    return 0;
}
