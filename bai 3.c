
#include <stdio.h>

int main() {
    int a, b;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &a, &b);
    printf("Tổng: %d + %d = %d\n", a, b, a + b);
    printf("Hiệu: %d - %d = %d\n", a, b, a - b);
    printf("Tích: %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("Thương: %d / %d = %d\n", a, b, a / b);
        printf("Dư: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Không thể chia cho 0.\n");
    }
    return 0;
}