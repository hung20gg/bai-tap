#include<stdio.h>
int main() {
    float a,b,c,d;
    printf("\n daisan ="), scanf("%f",&a);
    printf("\n rongsan ="), scanf("%f",&b);
    printf("\n dainha ="), scanf("%f", &c);
    printf("\n rongnha ="), scanf("%f",&d);
    float dientichsanco= (a-c)*(b-d);
    float thoigian=dientichsanco/0.5;
    printf("\n thoi gian de cat toan bo co trong san la %f giay", thoigian);
    return 0;
}