#include <stdio.h>
#include <stdlib.h>
void tinhgiatri(int *x,int y)
{
    int i;
    int c = *x;
    for(i=1; i<y; i++)
    {
       *x *=c;
    }
}
int main()
{
    int x,y;
    scanf("%d%d", &x,&y);
    tinhgiatri(&x,y);
    printf("%d", x);
    return 0;
}
