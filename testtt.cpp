#include<stdio.h>
int main()
{
	int i,n,a[100],x=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("So phan tu chia het cho 3 va lon hon 10 la:");
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0&&a[i]>10)
		{
			printf("%5d",a[i]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=100&&a[i]<1000)
		{
			x++;
		}
	}
	printf("\nSo cac phan tu thuoc doan [100;1000) la: %d",x);
}
