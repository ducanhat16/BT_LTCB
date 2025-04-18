#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hang1,cot1,hang2,cot2;
    scanf("%d%d%d%d",&hang1,&cot1,&hang2,&cot2);
    int a[hang1][cot1];
    int b[hang2][cot2];
    if(cot1==hang2)
    {   int i,j;
        for(i=0; i<hang1; i++)
        {
            for(j=0; j<cot1; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        for(i=0; i<hang2; i++)
        {
            for(j=0; j<cot2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        int c[hang1][cot2];
        for(i=0; i<hang1; i++)
        {
            for(j=0; j<cot2; j++)
            {   c[i][j]=0;
                for(int k =0; k<hang2; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(i=0; i<hang1; i++)
        {
            for(j=0; j<cot2; j++)
            {
                printf("%-3d ", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("khong the nhan hai ma tran");
    }

    return 0;
}
