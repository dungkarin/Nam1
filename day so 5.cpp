#include <stdio.h>
int main()
{
	int a[1000],i,n;
	int tong,tbc;
	printf("So phan tu cua day la:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i=1);
		scanf("%d",&a[i]);
	}
	printf("tbc=");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		tong+=a[i];
		tbc=tong/n;
	}
	printf("%d",tbc);
}
