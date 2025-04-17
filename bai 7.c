#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;
    scanf("%lf", &a);
    if(a<5)
    {
        printf("Yeu");
    }
    else if (a>=5 && a <7)
    {
        printf("TB");
    }
    else if (a>=7 && a <8)
    {
        printf("Kha");
    }
    else if (a>=8 && a <9)
    {
        printf("Gioi");
    }
    else if (a>9 && a<=10)
    {
        printf("Xuat sac");
    }
    else {}
    return 0;
}
