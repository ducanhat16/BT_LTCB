#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);
    double delta = b*b - 4*a*c;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
            {
                printf("Moi x la nghiem");
            }
            else
            {
                printf("Phuong trinh vo nghiem");
            }
        }
        else if (c==0)
        {
            printf("Phuong trinh co 1 nghiem don\n x = 0");
        }
        else
        {
            printf("Phuong trinh co 1 nghiem don\n x = %.5f", -c/b);
        }

    }
    else
    {
        if(delta > 0)
        {
            printf("Phuong trinh co 2 nghiem phan biet\n x1 = %.5f\n x2 = %.5f", (-b-sqrt(delta))/(2*a), (-b+sqrt(delta))/(2*a));
        }
        else if(delta < 0)
        {
            printf ("Phuong trinh vo nghiem");
        }
        else
        {
            printf("Phuong trinh co nghiem kep\n x1 = x2 = %.5f",-b/(2*a) );
        }
    }

    return 0;
}

