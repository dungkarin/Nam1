#include<stdio.h>
#include<math.h>
main()
{
	float I,IO,V;
	float T =300,e =1.6*pow(10,-19);
	I = IO*(pow(e,(11600*(V/T)))-1);
	printf("Nhap dien ap V= ");
	scanf("%f",&V);
	printf("Nhap dong dien bao hoa IO= ");
	scanf("%f",&IO);
	if(IO<0 || V <0)
	printf("\nSo lieu nhap khong hop le");
	else
	printf("\nDong dien I di qua di ot o nhiet do phong la: %.2f",I);
}
