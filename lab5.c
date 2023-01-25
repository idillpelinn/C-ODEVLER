/*Bu fonksiyonu kullanarak 1-100 arasýndaki b¨ut¨un asal sayýlarý bulan
bir program yazýnýz.*/
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
