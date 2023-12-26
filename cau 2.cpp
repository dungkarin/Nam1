#include<stdio.h>
#include<math.h>
#include <conio.h>
main()
{
	float a,b,c,d,x,x1,x2,p,S;
	int key;
	while (key != 4)
	{
	printf("1. Giai phuong trinh bac nhat \n2. Giai phuong trinh bac 2 \n3. Tinh dien tich tam giac khi biet do dai 3 canh \n4.Thoat \nMoi ban chon chuong trinh\n");
	scanf("%d",&key);
	
	
		switch (key)
	{	
		case 1:
			{
				printf("\nPhuong trinh bac nhat co dang: ax + b = 0");
				printf("\nNhap a= "); scanf("%f",&a);
				printf("\nNhap b= "); scanf("%f",&b);
				x = -b / a;
				printf("\nKet qua la: %.2f",x);
				printf("\nBam phim bat ky de tiep tuc!\n");
				getch();
				system("cls");
				break;
			}
		case 2:
			{
				printf("\nPhuong trinh bac 2 co dang: ax^2 + bx + c = 0");
				printf("\nNhap a= "); scanf("%f",&a);
				printf("\nNhap b= "); scanf("%f",&b);
				printf("\nNhap c= "); scanf("%f",&c);
				d = b*b - 4*a*c;
				if(a==0)
				printf("\nPhuong trinh khong hop le, hay nhap lai so lieu");
				if(b == 0) 
				{
            		if (c == 0) 
                	printf("\nPhuong trinh co nghiem x = 0"); 
					else 
                	printf("\nPhuong trinh vo nghiem");
				}
				else 
				{
				if(d > 0) 
				{
            		x1 = (-b+sqrt(d))/(2*a);
            		x2 = (-b-sqrt(d))/(2*a);
            		printf("\nNghiem thu nhat x1 = %.2f",x1);
            		printf("\nNghiem thu nhat x2 = %.2f",x2);
				}
				if ( d == 0)
					printf("\nPhuong trinh co nghiem kep: x1 = x2 = %.2f",-b/2*a);
				if(d < 0)
					printf("\nPhuong trinh vo nghiem");
				}
				printf("\nBam phim bat ky de tiep tuc!\n");
				getch();
				system("cls");
				break;	
			}
		case 3:
			{
				printf("\nNhap canh a: "); scanf("%f",&a);
				printf("\nNhap canh b: "); scanf("%f",&b);
				printf("\nNhap canh c: "); scanf("%f",&c);
				if(a <= 0 || b <= 0 || c <= 0)
				printf("\nCanh cua tam giac khong hop le");
				else
				{
					p = 0.5 * (a+b+c);
					S = sqrt(p*(p-a)*(p-b)*(p-c));
					printf("\nDien tich tam giac la: %.2f",S);
				}
				printf("\nBam phim bat ky de tiep tuc!\n");
				getch();
				system("cls");
				break;
			}
		case 4:
			{	
			break;
			}
		default:
		{
			printf("\nKhong co chuong trinh duoc chon");
			break;
		}
	}
	}
	return 0;
}
