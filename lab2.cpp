// 3 tamsay�n�n �carp�m�n� hesaplayan program�n kendisini yaz�n�z.
#include<stdio.h>
int main()
{
	int x;
	int y;
	int z;
	int sonuc;
	printf("enter first number\n");
	scanf("%d",&x);
	printf("enter second number\n");
	scanf("%d",&y);
	printf("enter third number\n");
	scanf("%d",&z);
	sonuc=x*y*z;
	printf("sonuc is %d\n",sonuc);
	return 0;
}
