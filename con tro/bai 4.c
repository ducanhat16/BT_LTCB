#include <stdio.h>
#include <stdlib.h>
void nhapmang(int *a)
{
    int i;
    for(i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
}
void sapxep(int *a)
{
    int i,j;
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
int main()
{
    int a[100];
    nhapmang(a);
    sapxep(a);
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
