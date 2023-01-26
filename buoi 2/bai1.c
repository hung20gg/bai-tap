#include <stdio.h>
#include <math.h>
int gthua(float a){
    if(a==2){
        return 2;
    }
    float gt=sqrt(2*3.14*a)*(pow((a/2.718),a));
    return gt;
}
int main() {
    float n;
    scanf("%f",&n);  
    float gta=gthua(n)/(gthua(n-2)*gthua(2));
    printf("%f",round(gta));
    return 0;
}