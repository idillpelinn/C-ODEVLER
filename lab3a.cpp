/* Kullan�c� taraf�ndan girilen bir tamsay� e^ger negatif bir say� ise bu say�y�,
de^gilse �Pozitif bir say� girdiniz!� uyar�s�n� ekrana yazd�ran bir program
geli�stiriniz.*/
#include<stdio.h>
int main()
{
	int a;
    printf("enter a number\n");
    scanf("%d",&a);
    if(a<0)
       printf("say� negatiftir\n");
    else
       printf("Pozitif bir say� girdiniz!\n");
    return 0;
}
