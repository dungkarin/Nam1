#include <stdio.h>
int main()
{
	// nhâp du lieu
	int a[100],i,n;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d cua day: ",i+1);
		scanf("%d",&a[i]);
	}
	// xuât du lieu
	printf("Day so vua nhap la: ");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	printf("\nDay so sau khi sap xep la: ");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0&&a[i]%3==0)
		{
			printf("%5d",a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%3!=0)
		{
			printf("%5d",a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0&&a[i]%3==0)
		{
			printf("%5d",a[i]);
		}
	}
}
