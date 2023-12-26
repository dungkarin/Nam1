#include <stdio.h>
int main()
{
	int a,b;
	printf("nhap a va b: ");
	scanf("%d %d",&a,&b);
	if (a>b){
	printf("%d>%d\n",a,b);
    }
	else if (a==b) {
		printf("%d=%d",a,b);
	}
	else printf("%d<%d",a,b);
}
