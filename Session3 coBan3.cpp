#include <stdio.h>
int main(){
    float r;
    printf("nhap vao ban kinh cua hinh tron: ");
    scanf("%f", &r);
    float perimeter=r*2*3.14;
    float area=r*r*3.14;
    printf("Chu vi cua hinh tron la: %.2f \n", perimeter);
    printf("Dien tich cua hinh tron la: %.2f \n", area);
    return 0;
}
