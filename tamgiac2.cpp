#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,p,r;
	printf("Nhap do dai 3 canh cua tam giac:\n");
	printf("a= ");scanf("%f",&a);
	printf("b= ");scanf("%f",&b);
	printf("c= ");scanf("%f",&c);
	p=(a+b+c)/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	r=(a*b*c)/(4*s);
	printf("Ban kinh = %.2f",r);
	printf("\nDien tich = %.2f",s);
}


