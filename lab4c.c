/* Kullanıcı tarafından girilen bir sayının fakt¨oriyel de^gerini hesaplayarak
sonucu ekrana yazdıran programı for d¨ong¨u yapısını kullanarak geli¸stiriniz.*/
#include<stdio.h>
int main()
{
	int n;
	int sayi;
	int fac=1;
	printf("enter a number \n");
	scanf("%d",&n);
	{
	for(sayi=1;sayi<=n;sayi++)
	   fac=fac*sayi;
	   printf("result: %d",fac);
	   }
	return 0;
	}
