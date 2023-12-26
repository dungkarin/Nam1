#include <stdio.h>
int main()
{
	int ngay,thang,nam;
	int ngaycuathang;
	printf("nhap ngay thang nam : ");
	scanf("%d%d%d",&ngay,&thang,&nam);
	switch(thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: ngaycuathang=31;
	break;
	case 2: ngaycuathang=28;
	break;
	case 4: case 6: case 9: case 11: ngaycuathang=30;
	break;
    }
    if(ngay<=ngaycuathang&&thang<=12&&nam>0)
    {
    	if(ngay<ngaycuathang)
		{
			ngay=ngay+1;
			printf("ngay tiep theo la: ngay %d thang %d nam %d ",ngay,thang,nam);
		}
    	else if(ngay==ngaycuathang,thang<12)
    	{
    		ngay=1;thang=thang+1;
    		printf("ngay tiep theo la: ngay %d thang %d nam %d ",ngay,thang,nam);
		}
		else if(ngay==ngaycuathang , thang==12)
		{
			ngay=1;thang=1;nam=nam+1;
			printf("ngay tiep theo la: ngay %d thang %d nam %d ",ngay,thang,nam);
		}
		
	}
	else printf("ngay thang nam khong hop le!");
	
}
