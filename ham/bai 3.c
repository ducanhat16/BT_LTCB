#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n)
{
    int i = 3;
    int a =1,b=1;
    int c = 0;
    while(i <=n)
    {
        if (n == 1 || n == 2)
        {
            return 1;
        }
        else
        {
            c = a+b;
            a = b;
            b = c;
            i++;
        }

    }
    return c;
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int kq = fibonacci(n);
    printf("Phan tu thu %d cua day fibonacci la: %d",n, kq);
    return 0;
}
