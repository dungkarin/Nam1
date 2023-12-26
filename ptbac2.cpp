#include<stdio.h>
#include<math.h>
int main ()
{

float a,b,c,delta;
printf("nhap a,b,c");
scanf("%f %f %f",&a,&b,&c);
delta=b*b-4*a*c;
if (delta>0) {
float x1,x2;
x1 = ((-b+sqrt(delta))/(2*a));
x2 = ((-b-sqrt(delta))/(2*a));
printf("phuong trinh co 2 nghiem phan biet x1=%.2f , x2=%.2f",x1,x2);
}
else if (delta==0){
float x;

x=(-b/(2*a));
printf("phuong trinh co nghiem kep x=%.2f",x);
}
else printf("phuong trinh vo nghiem!");
}
