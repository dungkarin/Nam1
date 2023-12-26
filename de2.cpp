#include <stdio.h>
#include <math.h>
int main ()
{
	int i;
	float x[100],y[100];
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
	float S;
	S=fabs((x[2]-x[1])*(y[3]-y[1])-(x[3]-x[1])*(y[2]-y[1]))/2;
	printf("\ndien tich tam giac la: %.2f\n",S);
	
	float AB,AC,BC;
	AB=pow(x[2]-x[1],2)+pow(y[2]-y[1],2);
	AC=pow(x[3]-x[1],2)+pow(y[3]-y[1],2);
	BC=pow(x[3]-x[2],2)+pow(y[3]-y[2],2);
	if(AB==AC&&AC==BC&&AB==BC&&S>0)
	{
		printf("ABC la tam giac deu");
	}
	else if(AB<BC&&AC<BC&&S>0)
	{
		if(BC==(AB+AC))
		{ 
		printf("ABC la tam giac vuong");
		}
	}
	else if(AB<AC&&BC<AC&&S>0)
	{
		if(AC==(AB+BC))
		{
			printf("ABC la tam giac vuong");
		}
	}
	else if(AC<AB&&BC<AB&&S>0)
	{
		if(AB==AC+BC)
		{
			printf("ABC la tam giac vuong");
		}
	}
	else printf("ABC khong phai tam giac vuong hay tam giac deu");
	
}
