/* Kullanýcý tarafýndan girilen bir tamsayý e^ger negatif bir sayý ise bu sayýyý,
de^gilse ”Pozitif bir sayý girdiniz!” uyarýsýný ekrana yazdýran bir program
geli¸stiriniz.*/
#include<stdio.h>
int main()
{
	int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a<0)
       printf("sayý negatiftir\n");
    else
       printf("Pozitif bir sayý girdiniz!\n");
    return 0;
}
