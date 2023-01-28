#include<stdio.h>
int c_at_depth(float depth){ //f(x)
    float c= 10*depth+20;
    printf("Do sau: %f\n",c);
    return c;
}
int to_fahrenheit(float c){
    float f=1.8*c+32;
    printf("Do F %f\n",f);
    return f;
}
float d;
int main(){
    
    //tinh do c
    scanf("%f",&d);
    float e=c_at_depth(d); //f(d)
    to_fahrenheit(e);
    
    return 0;
}