/*Bu fonksiyonu kullanarak 1-100 aras�ndaki b�ut�un asal say�lar� bulan
bir program yaz�n�z.*/
#include<stdio.h>
int main()
{
	int i;
	int j;
	int counter=0;
	for(i=2;i<=100;i++)
	{
		counter=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				counter++;
			}
		}
		if(counter==0)
		   printf("%d \n",i);
	}
	return 0;
	}
