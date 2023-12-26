#include<stdio.h>
int main()
{
	float a,b;
	 int ngay, thang, nam, ngay_cua_thang;
  printf("nhap ngay, thang, nam: ");
  scanf("%d%d%d",&ngay, &thang, &nam);
  switch(thang)
  {
  	case 1: case 3: case 5: case 7: case 8: case 10: case 12: ngay_cua_thang=31;
  	break;
  	case 4: case 6: case 9: case 11: ngay_cua_thang=30;
  	break;
  	case 2:ngay_cua_thang=28;
  	break;
  }
  	if(ngay<=ngay_cua_thang&&thang<=12&&nam>0)
	{
  	if (ngay==28,thang==2)
	  {
  	ngay==1; thang==3;
  	printf("ngay tiep theo la:ngay %d thang %d nam %d",ngay,thang,nam);
      }  
    else if(ngay=31,thang=1)
      {
      ngay=1; thang=2;
    printf("ngay tiep theo la:ngay %d thang %d nam %d",ngay,thang,nam);
      }
    }
	else printf("ngay %d thang %d nam %d khong hop le",ngay,thang,nam);
	
	
	
}
