#include <stdio.h>
int main()
{
	int a[1000],i,n;
	printf("so phan tu cua day:");
	scanf("%d",&n);
	printf("nhap cac phan tu cua day:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i+1);
		scanf("%d",a[i]);
	}
	printf("day so la:");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	return 0;
}


