#include<stdio.h> //phuong trinh bac 2
#include<math.h>

int main(){
	float a,b,c;
	printf("ax^2+bx+c=0 ");
	scanf("%f%f%f",&a,&b,&c);
	
	
	if (a==0 && b!=0){
		float x=-c/b;
		printf("phuong trinh co 1 nghiem: x=%f",x);
		return 0;
		}
	if ((a==0 && b==0) && c!=0){
		printf("phuong trinh vo nghiem");
		return 0;
	}
	if ((a==0 && b==0) && c==0){
		printf("phuong trinh vo so nghiem");
		return 0;
	}	
	if (a!=0){
		float delta=(b*b)-4*a*c ;
		if (delta>0){
			float x1=(-b+sqrt((b*b)-4*a*c))/(2*a) ;
			float x2=(-b-sqrt((b*b)-4*a*c))/(2*a);
			printf ("phuong trinh co 2 nghiem phan biet:=%f, %f",x1,x2);
			return 0 ;
	}
	if (delta<0){
		printf (" phuong trinh vo nghiem");
	}
		
	if (delta==0){
			float x3=(-b)/(2*a);
			printf("phuong trinh co nghiem kep:=%f",x3);
			return 0;
			}
			
	}
}