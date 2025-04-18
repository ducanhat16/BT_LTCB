#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int i;
    for(i=1; i<100; i+=2)
    {
        total += i;
    }
    printf("%d", total);
    return 0;
}
