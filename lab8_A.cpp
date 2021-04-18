/*1. Tam sayý elemanlarýndan olu¸san a¸sa^gýdaki diziyi bubblesort kullanarak
b¨uy¨ukten k¨u¸c¨u^ge sýralayýnýz.
int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };*/
#include<stdio.h>
#define SIZE
int main()
{
	int i,j,b,gecici;
	int a[ 10 ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	for(b=0;b<10;b++)
{
	   for(j=0;j<=9;j++){
	   	if (a[j]>a[b]){
	   		gecici=a[j];
	   		a[j]=a[b];
	   		a[b]=gecici;
	   		
		   }
	   }
	}	
	for(i=0;i<10;i++){
	printf("Output=%d ",a[i]);}
	
	return 0;
}
