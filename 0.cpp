#include <stdio.h>
#include <math.h>
int main()
{
	int arr[1000],n,i;
	float a;
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	printf("nhap cac phan tu cua day:\n");
    for (int i=0;i<n;i++)
    {
    	printf("a[%d]=",i);
    	scanf("%d",&arr[i]);
	}
	for (int i=0;i<n;i++)
	{
	printf("%5d",arr[i]);
	}
	for (int i=0;i<n;i++)
	{
        a+=arr[i]*2;
		printf("\na=%2f",a);
	}
}
