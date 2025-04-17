#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void nhapDaThuc(float a[], int n) {
    for (int i = 0; i <= n; i++) {
        printf("He so bac %d: ", i);
        scanf("%f", &a[i]);
    }
}
void inHeSo(float a[], int n) {
    for (int i = n; i >= 0; i--) {
        printf("%.2fx^%d", a[i], i);
        if (i > 0) printf(" + ");
    }
    printf("\n");
}
float giaTriDaThuc(float a[], int n, float x) {
    float kq = 0;
    for (int i = 0; i <= n; i++) {
        kq += a[i] * pow(x, i);
    }
    return kq;
}
void congDaThuc(float a[], int n, float b[], int m, float tong[], int *bacTong) {
    *bacTong = (n > m) ? n : m;
    for (int i = 0; i <= *bacTong; i++) {
        tong[i] = 0;
        if (i <= n) tong[i] += a[i];
        if (i <= m) tong[i] += b[i];
    }
}

int main() {
    int n, m, bacTong;
    float x;

    printf("Nhap bac cua da thuc P: ");
    scanf("%d", &n);
    float a[n+1];
    printf("Nhap he so da thuc P:\n");
    nhapDaThuc(a, n);

    printf("Nhap bac cua da thuc Q: ");
    scanf("%d", &m);
    float b[m+1];
    printf("Nhap he so da thuc Q:\n");
    nhapDaThuc(b, m);

    printf("Nhap gia tri x: ");
    scanf("%f", &x);

    float tong[(n > m ? n : m) + 1];
    congDaThuc(a, n, b, m, tong, &bacTong);

    printf("\nHe so da thuc P: ");
    inHeSo(a, n);

    printf("He so da thuc Q: ");
    inHeSo(b, m);

    printf("He so da thuc T = P + Q: ");
    inHeSo(tong, bacTong);

    printf("\nGia tri cua x = %.2f\n", x);
    printf("Gia tri P(x) = %.2f\n", giaTriDaThuc(a, n, x));
    printf("Gia tri Q(x) = %.2f\n", giaTriDaThuc(b, m, x));
    printf("Gia tri T(x) = %.2f\n", giaTriDaThuc(tong, bacTong, x));

    return 0;
}
