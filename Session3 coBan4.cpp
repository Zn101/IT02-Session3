#include <stdio.h>
int main(){
    float toan,van,anh;
    printf("nhap vao diem toan: ");
    scanf("%f", &toan);
    printf("nhap vao diem van: ");
    scanf("%f", &van);
    printf("nhap vao diem anh: ");
    scanf("%f", &anh);
    float avr=(toan+van+anh)/3;
    printf("diem trung binh 3 mon la: %.2f", avr);
}
