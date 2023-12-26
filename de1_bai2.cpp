#include<stdio.h>
#include<string.h>
int main()
{
	struct Dsct{
		char hoten[31];
		int sobanthang;
		char tendoibong[5];
	};
	Dsct cauthu[100];
	int n,i;
	printf("Nhap so cau thu: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("nhap thong tin cau thu thu %d: \n",i+1);
		printf("Ho ten: ");
		fflush(stdin);
		gets(cauthu[i].hoten);
		printf("So ban thang: ");
		fflush(stdin);
		scanf("%d",&cauthu[i].sobanthang);
		printf("Cau thu cua doi bong: ");
		fflush(stdin);
		gets(cauthu[i].tendoibong);
	}
	printf("Danh sach cau thu vua nhap: \n");
	printf("|%-31s|%-20s|%-10s|\n", "Ho Ten" , "So Ban Thang" , "Doi Bong");
	for(i=0;i<n;i++)
	{
		printf("|%-31s|%-20d|%-10s|\n",cauthu[i].hoten,cauthu[i].sobanthang,cauthu[i].tendoibong);	
	}
	printf("Danh sach cau thu sap xep theo so luong ban thang: \n");
	printf("|%-31s|%-20s|%-10s|\n", "Ho Ten" , "So Ban Thang" , "Doi Bong");
	int j=0;
	Dsct tg;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
		if(cauthu[i].sobanthang<cauthu[j].sobanthang)
			{
				tg=cauthu[i];
				cauthu[i]=cauthu[j];
				cauthu[j]=tg;
			}	
		}
		printf("|%-31s|%-20d|%-10s|\n",cauthu[i].hoten,cauthu[i].sobanthang,cauthu[i].tendoibong);
	}
	char ten[31];
	printf("Nhap ho ten cau thu can tim: \n");
	fflush(stdin);
	gets(ten);
	for(i=0;i<n;i++)
	{
		if(strcmp(cauthu[i].hoten,ten)==0)
		{
		printf("|%-31s|%-20s|%-10s|\n", "Ho Ten" , "So Ban Thang" , "Doi Bong");
		printf("|%-31s|%-20d|%-10s|\n",cauthu[i].hoten,cauthu[i].sobanthang,cauthu[i].tendoibong);
		}
		else if(i<n-1)
		{
		continue;
		}
		else 
		{
			printf("khong tim thay cau thu: %s.\n",ten);
		}
	}	
	int tongA=0,tongB=0,tongC=0,tongD=0;
		for(i=0;i<n;i++){
		if(strcmp(cauthu[i].tendoibong,"A")==0)
			{
				tongA+=cauthu[i].sobanthang;
			}
		else if(strcmp(cauthu[i].tendoibong,"B")==0)
			{
				tongB+=cauthu[i].sobanthang;
			}
		else if(strcmp(cauthu[i].tendoibong,"C")==0)
			{
				tongC+=cauthu[i].sobanthang;
			}
		else if(strcmp(cauthu[i].tendoibong,"D")==0)
			{
				tongD+=cauthu[i].sobanthang;
			}			
		}
	if(tongA>tongB&&tongA>tongC&&tongA>tongD)
	{
		printf("Doi A ghi duoc nhieu ban thang nhat: %d ban",tongA);	
	}
	else if(tongB>tongA&&tongB>tongC&&tongB>tongD)	
	{
		printf("Doi B ghi duoc nhieu ban thang nhat: %d ban",tongB);	
	}
	else if(tongC>tongA&&tongC>tongB&&tongC>tongD)	
	{
		printf("Doi C ghi duoc nhieu ban thang nhat: %d ban",tongC);	
	}
	else if(tongD>tongA&&tongD>tongC&&tongD>tongB)	
	{
		printf("Doi D ghi duoc nhieu ban thang nhat: %d ban",tongD);	
	}
	else printf("Khong co doi ghi duoc nhieu ban thang nhat!");
	
}
