#include <stdio.h>
#include <stdlib.h>
void nhapmatran(int c[][100],int m,int n)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
}
void inmatran(int c[][100],int m,int n)
{
    int i,j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%4d ", c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j,k;
    int m1,n1;
    printf("Nhap so hang va so cot cua ma tran 1: ");
    scanf("%d%d", &m1,&n1);
    int m2,n2;
    printf("Nhap so hang va so cot cua ma tran 2: ");
    scanf("%d%d", &m2,&n2);
    int a[100][100];
    int b[100][100];
    printf("Nhap phan tu cua ma tran 1: ");
    nhapmatran(a,m1,n1);
    printf("Nhap phan tu cua ma tran 2: ");
    nhapmatran(b,m2,n2);
    if(m1 == m2 && n1 == n2)
    {
        printf("Tong cua hai ma tran la: \n");
        int c[100][100];
        for(i=0; i<m1; i++)
        {
            for(j=0; j<n1; j++)
            {
                c[i][j] = a[i][j] +b[i][j];
            }
        }
        inmatran(c,m1,n1);
    }
    else
    {
        printf("khong the tinh tong cua 2 ma tran \n");
    }



    if(n1 == m2)
    {
        printf("Tich cua hai ma tran la: \n");
        int c[100][100];
        for(i=0; i<m1; i++)
        {
            for(k = 0; k<n2 ; k++)
            {  c[i][k] = 0;
                for(j=0; j<n1; j++)
                {
                    c[i][k] += a[i][j] * b[j][k];
                }
            }
        }
        inmatran(c,m1,n2);
    }
    else
    {
        printf("khong the nhan 2 ma tran \n");
    }
    return 0;
}
