#include<stdio.h>
int main()
{
	int i,j;
	int cot,hang;
	printf("nhap so cot cua ma tran: ");
	scanf("%d",&cot);
	printf("nhap so hang cua ma tran: ");
	scanf("%d",&hang);
	
	int a[100][100];
	printf("nhap cac phan tu cua ma tran: \n");
	for(i=0;i<cot;i++)
	{
		for(j=0;j<hang;j++)
		{
			printf("matrix[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("cac phan tu cua ma tran: \n");
	for(i=0;i<cot;i++)
	{
		for(j=0;j<hang;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	int tong=0;
	int max=0;
	for(i=0;i<cot;i++)
	{
		for(j=0;j<hang;j++)
		{
			tong+=a[i][j];
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
	printf("tong cac phan tu cua ma tran la: %d\n",tong);
	printf("phan tu lon nhat cua ma tran la: %d\n",max);
	return 0;
	return max;
}
