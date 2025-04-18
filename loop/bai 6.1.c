#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d%d", &a,&b);
    int c = a*b;
    while(b!=0) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    printf("uoc chung lon nhat: %d\n", a);
    printf("boi chung nho nhat: %d\n", c/a);
    return 0;
}
