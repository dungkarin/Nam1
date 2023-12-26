#include <stdio.h>
int main()
{
	int a[1000],i,n;
	int tong=0,tbc;
	int dem=0;
	//nhap
	printf("So phan tu cua day la:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",&a[i]);
	}
	//xuat
	//1
	for(i=0;i<n;i++)
	{
			if(a[i]%2==0)
		{	
			dem++;
			tong+=a[i];
		}
	}
	if(dem==0)
	printf("khong co so chan!");
		tbc=tong/dem;
	printf("tbc cua cac phan tu chan la %d",tbc);
	//2
	printf("\nday so giam dan la: ");
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				int x=a[i];
				a[i]=a[j];
				a[j]=x;
			}
		}
		printf("%5d",a[i]);
	}
}
