#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x,y;
	printf("nhap n,x,y: ");
	scanf("%d %f %f",&n,&x,&y);
	int tu=0,mau=0;
	for(int i=0;i<=n;i++)
	{
		tu=tu+i*pow(x,i);
		mau=mau+i*pow(y,i);
	}
	printf("S = %f",(float)tu/mau);
}
