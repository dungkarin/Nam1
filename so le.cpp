#include <stdio.h>
main(){
int i,n,a;
printf("Nhap vao gia tri n= ",n);
scanf("%d",&n);printf("Day so le tu 1 den %d la: ",n);
for(i=1;i<=n;i++)
   {
       a=i%2;if (a!=0)printf("%d ",i);
   }
getchar();
}


