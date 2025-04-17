#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a,b,e;
    double c,d,f;
    double x,y;
    scanf("%lf%lf%lf%lf%lf%lf", &a,&b,&e,&c,&d,&f);
    if ((a/c)==(b/d))
    {
        if ((b/d)==(e/f))
        {
            printf("He phuong trinh co vo so nghiem");
        }
        else
        {
            printf("He phuong trinh vo nghiem");
        }
    }
    else
    {

        printf("He phuong trinh co nghiem duy nhat\n x = %.5f\n y = %.5f", (e-(b*f)/d)/(a-b*c/d), (f-c*e/a)/(-c*b/a +d));
    }
    return 0;
}
