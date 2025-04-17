#include <stdio.h>
    void convert(int number, int base)
    {
        char result[32];
        int index = 0;
        char digits[] = "0123456789ABCDEF";

        if (number == 0)
        {
            printf("0");
            return;
        }

        while (number > 0)
        {
            result[index++] = digits[number % base];
            number /= base;
        }
        for (int i = index - 1; i >= 0; i--)
        {
            printf("%c", result[i]);
        }
    }

    int main()
    {
        int number;
        printf("Nhap mot so nguyen duong: ");
        scanf("%d", &number);
        if (number <= 0)
        {
            printf("Vui long nhap so nguyen duong.\n");
            return 1;
        }
        printf("Dang nhi phan (co so 2): ");
        convert(number, 2);
        printf("\n");
        printf("Dang bat phan (co so 8): ");
        convert(number, 8);
        printf("\n");
        printf("Dang thap luc phan (co so 16): ");
        convert(number, 16);
        printf("\n");
        return 0;
    }
