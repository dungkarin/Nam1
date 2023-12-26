#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("nhap a,b,c: ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b||a==c||b==c)
	{
		printf("\nkhong co so o giua.");
	}
	else if((a>b&&a<c)||(a<b&&a>c))
	{
		printf("\nso o giua la %f",a);
	}
	else if((b>a&&b<c)||(b<a&&b>c))
	{
		printf("\nso o giua la %f",b);
	}
	else if((c>a&&c<b)||(c<a&&c>b))
	{
		printf("\n so o giua la %f",c);
	}
}
