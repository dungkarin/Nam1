#include<stdio.h>
int main()
{
	int a[100][100],i,j,c,h;
	printf("So cot cua ma tran la: ");
	scanf("%d",&c);
	printf("So hang cua ma tran la: ");
	scanf("%d",&h);
	printf("Nhap cac phan tu cua ma tran: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("a[%d][%d]=",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<h;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	int x;
	printf("Nhap phan tu can tim: ");
	scanf("%d",&x);
	for(i=0;i<c;i++)
	{
		for(j=0;j<h;j++)
		{
			if(x==a[i][j])
			{
				printf("Phan tu can tim nam o hang %d cot %d",i+1,j+1);
			}
		}
	}
}
			
