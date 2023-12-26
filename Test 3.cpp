#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x;
	printf("nhap n,x: ");
	scanf("%d %f",&n,&x);
	double s=1;
	for(int i=1;i<=n;i++)
	{
		s=sqrt(s+i*x);
	}
	printf("%lf",s);
}
