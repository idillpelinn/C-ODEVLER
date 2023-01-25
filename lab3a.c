/* Kullanıcı tarafından girilen bir tamsayı e^ger negatif bir sayı ise bu sayıyı,
de^gilse ”Pozitif bir sayı girdiniz!” uyarısını ekrana yazdıran bir program
geli¸stiriniz.*/
#include<stdio.h>
int main()
{
	int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a<0)
       printf("sayı negatiftir\n");
    else
       printf("Pozitif bir sayı girdiniz!\n");
    return 0;
}
