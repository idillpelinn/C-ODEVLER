/* 1�den ba�slayarak kullan�c� taraf�ndan girilen n say�s�na kadar olan tamsay�lar� toplayarak, toplam� ekrana yazd�ran program� while d�ong�u yap�s�n�
kullanarak geli�stiriniz.*/
#include<stdio.h>
int main()
{
	int counter=1;
	int n;
	int total=0;
	printf("enter a number: \n");
	scanf("%d",&n);
	while(counter<=n)
	{
	total+=counter;
    counter++;
	}
	printf("result: %d",total);
	return 0;
}

