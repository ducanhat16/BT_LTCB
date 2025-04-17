#include <stdio.h>
#include <stdlib.h>
int hamdequy(int n)
{
    int i;
    int c = 1;
    if(n == 0 || n ==1)
    {
        return 1;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            c*=(i+1);
        }
        return c;
    }
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int kq = hamdequy(n);
    printf("%d! co gia tri bang: %d",n, kq);
    return 0;
}
