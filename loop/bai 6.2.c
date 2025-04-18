#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int x;
    scanf("%d", &x);
    int i;
    for(i=1; i<=x; i++)
    {
        if(x%i==0)
        {
            total +=i;
        }
    }
    if(total/2==x)
    {
        printf("%d la so hoan hao", x);
    }
    else
    {
        printf("%d khong phai la so hoan hao", x);
    }
    return 0;
}
