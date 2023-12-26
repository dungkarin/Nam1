#include<stdio.h>
int main()
{
	int a[100],i,n,min=0,dem=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Nhap phan tu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			dem++;
			min=a[i];
			break;
		}			
	}
	
	for(i=i+1;i<n;i++)
	{ 
		if(a[i]%2==0&&min>a[i])
		{
			min=a[i];
		}
	}
	
	if(dem==0)
		{
		printf("Khong co so chan!");
		} 
	else printf("So chan nho nhat trong day so la: %d",min);
	
}
