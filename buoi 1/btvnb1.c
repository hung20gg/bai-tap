#include<stdio.h>
int main() {
    float batdau,ketthuc;
printf("\n batdau="); scanf("%f",&batdau);
printf("\n ketthuc="); scanf("%f", &ketthuc);
float quangduong=ketthuc-batdau;
printf("\n %f-%f=%f",batdau,ketthuc,quangduong);
float giave=quangduong*1.5;
printf("\n %f*1.5=%f",quangduong,giave);
printf("\n ban da di mot quang duong dai %fkm ", quangduong);
printf("voi $1.50 moi km, gia ve cua ban la $%f",giave);
return 0;
}