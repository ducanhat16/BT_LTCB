#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][3] =
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int b[3][3] =
    {
        {7,2,3},
        {4,8,6},
        {7,5,3}
    };
    int c[3][3];
    int i,j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          c[i][j] = a[i][j]+b[i][j];
        }
    }
    printf("Tong cua hai ma tran la:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
          printf("%-3d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
