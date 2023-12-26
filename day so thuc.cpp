#include <stdio.h>
int main()
{
	int x,n,i,j,a[100];
	printf("So phan tu cua day la: ");
	scanf("%d",&n);
	printf("nhap cac phan tu cua day:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
		printf("%5.1f",a[i]);
	}
}
