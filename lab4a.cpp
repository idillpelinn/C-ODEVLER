/* 1’den ba¸slayarak kullanýcý tarafýndan girilen n sayýsýna kadar olan tamsayýlarý toplayarak, toplamý ekrana yazdýran programý while d¨ong¨u yapýsýný
kullanarak geli¸stiriniz.*/
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

