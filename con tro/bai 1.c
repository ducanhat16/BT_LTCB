#include <stdio.h>
#include <stdlib.h>
void hoandoi(int *a, int *b) {
int c = *a;
*a = *b;
*b = c;
}
int main()
{
    int a,b;
    printf("Nhap gia tri cua a va b: ");
    scanf("%d%d", &a,&b);
    hoandoi(&a,&b);
    printf("Gia tri cua a va b sau khi hoan doi la: %d va %d", a,b);
    return 0;
}
