#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float x;
	printf("nhap n,x: ");
	scanf("%d %f",&n,&x);
	int tu=1,mau=0;
	for(int i=1;i<=n;i++)
	{
		tu=tu*(x+i);
		mau=mau+pow(i,2);
	}
	printf("S = %f",(float)tu/mau);
}
