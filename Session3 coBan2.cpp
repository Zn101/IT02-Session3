#include <stdio.h>
int main(){
    float C;
    printf("Nhap vao C': ");
    scanf("%f", &C);
    float F=(C*1.8)+32;
    printf("Nhiet do F' cua C' la: %.1f", F);
}
