#include <stdio.h>
#include <math.h>
int main()
{
	int arr[1000];
	int i,n;
	printf("So phan tu cua day la: ");
	scanf("%d",&n);
	printf("Nhap phan tu cua day so:\n");    
	for (int i=0;i<n;i++)
	{
	printf("a[%d]=",i);
	scanf("%d",&arr[i]);
	}
	printf("day so le la:");
	for (int i=0;i<n;i++)
	{
	if (arr[i]%2!=0)
	{
	printf("%5d",arr[i]);
	}
	
}

    printf("\nday so chan la: ");
    for (int i=0;i<n;i++)
{
    if (arr[i]%2==0)
	{
		printf("%5d",arr[i]);
}
}
}
