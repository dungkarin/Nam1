#include<stdio.h>
#include<math.h>
int main(){
	//a
	int i, j, n;
	printf("Nhap so phan tu cua day so nguyen: ");
	scanf("%d",&n);
	int arr[MAX];
	for(i=1;i<=n;i++){
		printf(" Gia tri cua phan tu a%d la: ",i);
		scanf("%d", &arr[i]);
	}
	printf("a, Day so nguyen la ", n);
	for(i=1;i<=n;i++){
		printf("%d",arr[i]);
	}
}
