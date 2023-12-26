#include<stdio.h>

int main() {
    int i,n;
    int arr[1000];
    printf("nhap so phan tu cua day:");
    scanf("%d", &n);
    printf("nhap cac phan tu cua day:\n");
    for (int i = 0; i < n; i++) { 
	    printf("a[%d]",i);
        scanf("%d", &arr[i]);
    }
   
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
            
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("sap xep day so theo thu tu tang dan: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
