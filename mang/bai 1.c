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
    int i,j;
    printf("Truong hop 1:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    int b[3][3];
    printf("Nhap phan tu cho ma tran 2:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("Truong hop 2:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
