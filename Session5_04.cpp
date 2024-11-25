#include <stdio.h>
int main(){
    int n, i;
    printf("nhap bang cuu chuong tu 1 den 10: ");
    scanf("%d", &n);
    if (n >= 1 && n <= 10) {
        for (i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    } else {
        printf("nhap lai bang cuu chuong tu 1 den 10");
    }
    return 0;
}

