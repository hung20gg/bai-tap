#include<stdio.h>
int main(){
    float a,b,a1,b1;
    printf("Length: ");scanf("%f",&a);
    printf("Width: ");scanf("%f",&b);
    printf("House length: ");scanf("%f",&a1);
    printf("House width: ");scanf("%f",&b1);
    float dien_tich=a*b-a1*b1;
    float time=dien_tich/0.5;
    
    printf("Time: %f second",time);
}