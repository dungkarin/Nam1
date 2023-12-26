#include<stdio.h>
int main()
{
	int a,b,s=0,tg=0,x[20],i=0;
	int sum=0;
	printf("Nhap a,b: ");
	scanf("%d%d",&a,&b);
	printf("Nhap cac phan tu cua mang: \n");
	do{
		printf("x[%d]=",i+1);
		scanf("%d",&x[i]);
		if(x[i]<=a || x[i]>b)
		{
			printf("Moi ban nhap lai.");
			continue;
		}
		s+=x[i];
		i++;
	}while(s<=a*b || i==20);
	printf("Day tang dan la: \n");
	for(int j=0;j<i;j++)
	{
		for(int k=j+1;k<i;k++){
			if(x[j]>x[k]){
				tg=x[j];
				x[j]=x[k];
				x[k]=tg;
			}
		}
		printf("%d\t",x[j]);
}
	for(int j=0;j<i;j++)
	{
		if(x[j]%2!=0){
			sum+=x[j];
		}
	}
	printf("\ntong so le= %d",sum);	
		
}


