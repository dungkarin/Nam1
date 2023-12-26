#include "stdio.h"
struct cautruc{
    char may[10];
    char model[10];
    char hangsanxuat[10];
    float gia;
    int thoigianbaohanh;
    char hedieuhanh[10];
    
    
};
int main()
{
    int n;
    printf("nhap so laptop: "); scanf("%d", &n);
    cautruc lap[n+1];
    for (int i=1; i<=n; i++)
    {
        printf("laptop thu%d\n", i );
        fflush(stdin);
        printf("nhap thong tin\n"); gets(lap[i].may);
        fflush(stdin);
        printf("nhap model laptop: \n"); gets(lap[i].model);
        fflush(stdin);
        printf("nhap hang san xuat: \n"); gets(lap[i].hangsanxuat);
        fflush(stdin);
        printf("nhap he dieu hanh: \n"); gets(lap[i].hedieuhanh);
        printf("nhap gia: \n"); scanf("%f", &lap[i].gia);
        printf("nhap thoi gian bao hanh theo nam: \n"); scanf("%d", &lap[i].thoigianbaohanh);
        printf("\nmay%d bao gom: \n",i);
        printf("\tmodel lap[%d]: %s\n",i, lap[i].model);
        printf("\thangsanxuat lap[%d]: %s\n", i, lap[i].hangsanxuat);
        printf("\thedieuhanh lap[%d]: %s\n", i, lap[i].hedieuhanh);
        printf("\tgia lap[%d]: %.0f\n",i,lap[i].gia);
        printf("\tnam bao hanh lap[%d]: %d\n",i, lap[i].thoigianbaohanh);
    }
    float tg;
    for (int i=0; i<=n-1; i++)
        for (int j=i+1;j<n ; j++)
            {
                if (lap[i].gia<lap[j].gia)
                {
                    tg=lap[i].gia;
                    lap[i].gia=lap[j].gia;
                    lap[j].gia=tg;
                }
            }
    
    printf("bang gia giam dan la: ");
    for(int i=0 ; i<n; i++)
            printf("%.f ", lap[i].gia);
}

