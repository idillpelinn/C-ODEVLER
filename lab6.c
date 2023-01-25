/*Yazı, tura atan bir fonksiyon yazınız. Paranın her atılı¸sında ekrana yazı veya
tura yazsın. Program 100 kez yazı tura atsın ve sonu¸cları ekrana yazdırsın.
Program paraAt isminde arg¨uman almayan bir fonksiyon ¸ca^gırsın ve yazı i¸cin
0, tura i¸cin 1 d¨ond¨urs¨un. (Not: E^ger program ger¸cek¸ci bir hesap yapıyorsa
sonu¸clar toplam atı¸sın yarısına yakın olmalıdır yani 50 yazı ve 50 tura)*/
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
 printf("yazı\n");
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
