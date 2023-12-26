#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main ()
{
	float a,b,c,delta;
	printf("Nhap a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	delta=b*b-4*a*c;
	float x1,x2;
	if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %.1f va x2 = %.1f", x1, x2);
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %.1f", x1);
    } else {
        printf("Phuong trinh vo nghiem!");
}
}
