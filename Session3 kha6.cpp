#include <stdio.h>
int main() {
    int longSide, shortSide;
    printf("Nhap vao chieu dai tam giac: ");
    scanf("%d", &longSide);
    printf("Nhap vao chieu rong tam giac: ");
    scanf("%d", &shortSide);
    printf("Dien tich cua tam giac la: %d", (longSide*shortSide)/2);
    return 0;
}
