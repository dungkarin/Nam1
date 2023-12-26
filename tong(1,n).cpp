#include<stdio.h>


int main()
{
	int a,n,tc=0,tl=0;
	printf("Nhap n: ");scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		a=i%2;
		if(a==0){
			tc+=i;
		}
		if(a!=0){
			tl+=i;
		}
	}
	
	printf("Tong chan: %d\nTong le: %d",tc,tl);

}


