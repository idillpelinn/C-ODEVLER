/*Yazý, tura atan bir fonksiyon yazýnýz. Paranýn her atýlý¸sýnda ekrana yazý veya
tura yazsýn. Program 100 kez yazý tura atsýn ve sonu¸clarý ekrana yazdýrsýn.
Program paraAt isminde arg¨uman almayan bir fonksiyon ¸ca^gýrsýn ve yazý i¸cin
0, tura i¸cin 1 d¨ond¨urs¨un. (Not: E^ger program ger¸cek¸ci bir hesap yapýyorsa
sonu¸clar toplam atý¸sýn yarýsýna yakýn olmalýdýr yani 50 yazý ve 50 tura)*/
#include<stdlib.h>
#include<stdio.h>

#include<time.h>
int paraAt();
int main()
{
 int i;
 srand(time(NULL));
 for(i=1;i<=100;i++)
 {
 if(paraAt()==1)
 printf("tura\n");
        else if(paraAt()==0)
 printf("yazý\n");
 }
return 0;
}
int paraAt(){
 int a;
 a=1+rand()%2;
        if(a%2==0)
 return 1;
        else
 return 0;
}
