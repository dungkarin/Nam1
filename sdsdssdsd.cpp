#include<stdio.h>
#define MAX 1000
int main()
{
	//a
	int i, j, n;
	printf("Nhap so phan tu cua day so nguyen: ");
	scanf("%d",&n);
	int arr[MAX];
	for(i = 1;i <= n;i++){
		printf(" Gia tri cua phan tu a%d la: ", i);
		scanf("%d", &arr[i]);
	}
	printf("a, Day so nguyen la: ", n);
	for(i = 1;i <= n;i++){
		printf("%d", arr[i]);
	}
//b
	unsigned int k;
	printf("\nb, Nhap so nguyen duong k la: ");
	scanf("%d", &k);
	int dem = 0, sum = 0;    //bien dem bieu thi cho so phan tu co gia tri bang k.
                             //sum bieu thi cho tong cac phan tu chia het cho k.
	for(int i = 1; i <= n; i++){
		if(arr[i] % k == 0){
			sum += arr[i];
			dem++;
		}
	}			
	printf(" TRung binh cong cac so chia het cho k la: %0.2f", (float)sum / dem);			 	
//c
    float tong = 0;
	for(i = 1, j = 2; i < n, j < n; i++ ,j++){
		if(arr[j] == 0) continue;
		tong += 1.0 * arr[i] / arr[i + 1];
	}
	printf("\nTong can tim la: %0.2f", tong);
	return 0;	
}
