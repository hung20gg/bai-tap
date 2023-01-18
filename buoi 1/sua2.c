//Giải phương trình bậc hai
// ax2+bx+c=0
// chia TH
// a=0, a!=0 a=0 thi x = -c/b (b!=0)c=0 vsn
// a!=0 
// delta = b2-4ac
// delta < 0, phuong trinh vo nghiem
// delta > 0, x1 = (-b+sqrt(delta))/2a, x2 = (-b-sqrt(delta))/2a
// delta = 0, x1 = x2 = -b/2a
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("\n a,b,c="); scanf("%f %f %f",&a,&b,&c);
    if(a==0){//bx+c=0
        if(b!=0){// chac chan 1 nghiem
            printf("x = %f",-c/b);           
        }else if(c==0){// b=0 c=0
            printf("Phuong trinh vo so nghiem");           
        }else{//b=0 c!=0
            printf("Phuong trinh vo nghiem");           
        }
    }else{//ax2+bx+c=0
        float delta=(b*b)-(4*a*c);
        if(delta<0){// pt vô nghiệm
            printf("Phuong trinh vo nghiem");  
        }else if(delta==0){ // pt có nghiệm trùng
            printf("x1 = x2 = %f", -b/(2*a));
        }else{// phương trình có 2 nghiệm phân biệt
            float x1 =(-b+sqrt(delta))/(2*a);
            float x2 =(-b-sqrt(delta))/(2*a);   
            printf("x1 = %f\n",x1);
            printf("x2 = %f\n",x2);
        }
    }
}