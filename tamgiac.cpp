#include <stdio.h>
#include <math.h>
int main ()
{
	int i;
	float x[10],y[10];
	printf("Nhap toa do 3 diem:\n");
	for (i=1;i<=3;i++)
	{
		printf("toa do diem thu %d\n",i);
		printf("x%d=",i);
		scanf("%f",&x[i]);
		printf("y%d=",i);
		scanf("%f",&y[i]);
	}
	printf("Cac diem da cho la:");
    printf("  A(%.2f,%.2f) ",x[1],y[1]);
    printf("  B(%.2f,%.2f) ",x[2],y[2]);
    printf("  C(%.2f,%.2f) ",x[3],y[3]);
    float AB,AC,BC;
	AB=pow(x[2]-x[1],2)+pow(y[2]-y[1],2);
	AC=pow(x[3]-x[1],2)+pow(y[3]-y[1],2);
	BC=pow(x[3]-x[2],2)+pow(y[3]-y[2],2);
	printf("\nDo dai cac canh: AB=%.2f	AC=%.2f		BC=%.2f",AB,AC,BC);
    float C;
    C=AB+AC+BC;
    printf("\nChu vi tam giac la: %.2f",C);
	float S;
	S=fabs((x[2]-x[1])*(y[3]-y[1])-(x[3]-x[1])*(y[2]-y[1]))/2;
	printf("\nDien tich tam giac la: %.2f\n",S);
}
