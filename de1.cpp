#include <stdio.h>
#include <math.h>
int main()
{
	float x,a[1000];
	int i,j,n;
	//nhap
	printf("So phan tu cua day la: ");
	scanf("%d",&n);
	printf("nhap cac phan tu cua day:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%f",&a[i]);
	}
	//xuat
	//1
	printf("day so tang dan la:");
		for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			float x=a[i];
			a[i]=a[j];
			a[j]=x;
		}
	}
}
	for(i=0;i<n;i++)
	{
		printf("%5.1f",a[i]);	
	}
	//2
	float S,tong;
		for(i=0;i<n;i++)
	{
		tong+=pow(-1,i+1)*pow(a[i],i+1);
	}
	S=2018+tong;
		printf("\nS=%.3f",S);
		getchar();
	}
