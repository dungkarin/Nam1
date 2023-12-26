#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    printf("nhap lan luot a, b, c: ");
    scanf("%f %f %f",&a,&b,&c);
    float delta=(float)b*b-4*a*c;
    if(delta>0)
    {
        float x1,x2;
        x1=(float)(-b+sqrt(delta))/(2*a);
        x2=(float)(-b-sqrt(delta))/(2*a);
        printf("phuong trinh co 2 nghiem phan biet la: %f va %f ",x1,x2);
    }
    else if(delta==0)
    {
        float x=(float)-b/(2*a);
        printf("phuong trinh co nghiem kep la x = %f ",x);
    }
    else printf("phuong trinh vo nghiem. ");
}
