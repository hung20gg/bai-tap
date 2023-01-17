#include<stdio.h>
int main(){
    float a,b;
    printf("Length: ");scanf("%f",&a);
    printf("Width: ");scanf("%f",&b);
    float dien_tich=a*b;
    float time=dien_tich/0.5;
    printf("Time: %f second",time);
}