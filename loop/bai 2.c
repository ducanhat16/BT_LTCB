#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //freopen("D:\\C61\ACT_C61\\input.txt", "r", stdin);
    int n, x;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        int songuyento = 1;

        if (x < 2)
        {
            songuyento = 0;
        }
        else
        {
            for (int j = 2; j <= sqrt(x); j++)
            {
                if (x % j == 0)
                {
                    songuyento = 0;
                    break;
                }
            }
        }

        if (songuyento)
        {
            printf("%5d : YES\n", x);
        }
        else
        {
            printf("%5d : NO\n", x);
        }
    }



    return 0;
}
