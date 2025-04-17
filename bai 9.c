#include <stdio.h>
#include <stdlib.h>
int main()
{
    int b, c;
    scanf("%d %d", &b, &c);
    int d = (c % 4 == 0 && c % 100 != 0) || (c % 400 == 0);
    int e = 0;
    if (b < 1 || b > 12 || c < 1)
    {
        printf("Khong hop le");
    }
    else
    {
        switch (b)
        {
        case 4:
        case 6:
        case 9:
        case 11:
            e = 30;
            break;
        case 2:
            e = d ? 29 : 28;
            break;
        default:
            e = 31;
        }
        printf("Thang %d nam %d co %d ngay", b, c,e);
    }

    return 0;
}
