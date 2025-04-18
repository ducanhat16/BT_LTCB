#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    int giatri = 1;
    int i,j;
    int vong = 0;
    while(giatri <= n*n)
    {
        for(i = vong; i<n-vong; i++)
        {
            a[vong][i] = giatri++;
        }
        for(i=vong+1; i<n-vong; i++)
        {
            a[i][n-1-vong] = giatri++;
        }
        for(i = n-2-vong; i>=vong; i--)
        {
            a[n-1-vong][i] = giatri++;
        }
        for(i = n-2-vong; i>vong; i--)
        {
            a[i][vong] = giatri++;
        }
        vong++;
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
