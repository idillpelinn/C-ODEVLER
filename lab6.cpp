/*Yaz�, tura atan bir fonksiyon yaz�n�z. Paran�n her at�l��s�nda ekrana yaz� veya
tura yazs�n. Program 100 kez yaz� tura ats�n ve sonu�clar� ekrana yazd�rs�n.
Program paraAt isminde arg�uman almayan bir fonksiyon �ca^g�rs�n ve yaz� i�cin
0, tura i�cin 1 d�ond�urs�un. (Not: E^ger program ger�cek�ci bir hesap yap�yorsa
sonu�clar toplam at��s�n yar�s�na yak�n olmal�d�r yani 50 yaz� ve 50 tura)*/
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
 printf("yaz�\n");
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
