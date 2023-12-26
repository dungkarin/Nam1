#include <stdio.h>
int main()
{
	int a[1000],i,n;
	printf("So phan tu cua day la:");
	scanf("%d",&n);
	printf("Nhap cac phan tu cua day:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	int tbc=0,dem=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			dem++;
			tbc+=a[i];
		}			
	}
	tbc=tbc/dem;
	printf("trung binh cong cac so chan trong day la: %d",tbc);
	int x;
	printf("\nday so giam dan la:");
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
			   x=a[i];
			   a[i]=a[j];
			   a[j]=x;	
			}
		}
		printf("%5d",a[i]);
	}
}

