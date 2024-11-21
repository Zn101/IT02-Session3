#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Nhap vao so nguyen co 4 chu so: ");
    scanf("%d", &a);
    b=a/1000;
    c=a%1000/100;
    d=a%100/10;
    e=a%10;
    int sum=b+c+d+e;
    printf("tong cac so trong so nguyen la: %d",sum);
    }
