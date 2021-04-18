/* Kullanýcý tarafýndan girilen bir sayýnýn fakt¨oriyel de^gerini hesaplayarak
sonucu ekrana yazdýran programý for d¨ong¨u yapýsýný kullanarak geli¸stiriniz.*/
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
