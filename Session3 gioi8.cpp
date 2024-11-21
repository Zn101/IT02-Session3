#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Nhap vao so nguyen co 4 chu so: ");
    scanf("%d", &a);
    b=a/1000;
    c=a%1000/100;
    d=a%100/10;
    e=a%10;
    printf("so nghich dao la: %d%d%d%d",e,d,c,b);
    }
