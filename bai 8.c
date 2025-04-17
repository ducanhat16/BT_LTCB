#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf", &a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a)
    {
        if(a==b&&a==c)
        {
            printf("(%.5f, %.5f, %.5f) la tam giac deu\n", a,b,c);
        }
        else if (a==b||a==c||b==c)
        {
            printf("(%.5f, %.5f, %.5f) la tam giac can\n", a,b,c);
        }

        else if ((c*c+b*b==a*a)||(a*a+c*c==b*b)||(a*a+b*b==c*c))
        {
            printf("(%.5f, %.5f, %.5f) la tam giac vuong\n", a,b,c);
        }
        else
        {
            printf("(%.5f, %.5f, %.5f) la tam giac thuong\n", a,b,c);
        }
        printf("Chu vi tam giac = %f\n", a + b +c);
        double p = (a+b+c)/2;
        printf("Dien tich tam giac = %f\n", sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    else {
        printf("Khong phai tam giac");
    }
    return 0;
}



