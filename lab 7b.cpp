// dizinin ort hesapla
#include<stdio.h>
#include<stdlib.h>
#define SIZE 12
int main()
{
	int a[SIZE] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45};
	int i;
	int toplam=0;
	int average;
	for(i=0;i<12;i++){
		toplam=toplam+a[i];
	}
	average=toplam/12;
	printf("ORTALAMA: %d",average);
	return 0;
}
