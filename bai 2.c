#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = (c % 4 == 0 && c % 100 != 0) || (c % 400 == 0);
    int e;
    if (b < 1 || b > 12 || a < 1 || c < 1)
    {
        e = 0;
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
            if (d)
            {
                e = 29;
            }
            else
            {
                e = 28;
            }
            break;
        default:
            e = 31;
        }
    }

    if (a <= e && e != 0)
    {
        printf("%d/%d/%d", a, b, c);
    }
    else
    {
        printf("%d/%d/%d: khong hop le\n", a, b, c);
    }

    return 0;
}
