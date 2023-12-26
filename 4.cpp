#include <stdio.h>
#include <math.h>
int main()
{
	int a[1000],n,i,j,tong1=0,tong2=0;
	printf("So phan tu cua day la: ");
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);		
	}
	for (int i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nSo le trong day la: ");
	for (int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{	
		    tong1+=a[i];
			printf("%5d",a[i]);
		}
	}
	printf("\ntong cac so le: %d",tong1);
	printf("\nSo chan trong day la: ");
	for (int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			tong2+=a[i];
			printf("%5d",a[i]);
		}
	}
	printf("\ntong cac so chan: %d",tong2);
}
