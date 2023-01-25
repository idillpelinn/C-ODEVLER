/*2. Pamukkale Universitesinde kullanılan ba¸sarı puanlarını harf notuna d¨on¨u¸st¨urme ¨
tablosu a¸sa^gıda verilmi¸stir. Kullanıcı tarafından girilen puana kar¸sılık
d¨u¸sen harf notunu if-else yapısını kullanarak ekrana yazdırınız.*/
#include<stdio.h>
int main()
{
	int grade;
	printf("enter a number\n");	
	scanf("%d",&grade);
	if(grade>=90)
	   printf("A1\n");
	else
	   if(grade>=80)
	      printf("A2\n");
    else
       if(grade>=75)
          printf("B1\n");
    else
       if(grade>=70)
          printf("B2\n");
    else
       if(grade>=65)
          printf("C1\n");
    else
       if(grade>=60)
          printf("C2\n");
    else
       if(grade>=55)
          printf("D1");
    else
       if(grade>=50)
          printf("D2\n");
    else
       if(grade>=40)
          printf("E\n");
    else
       if("grade>=0")
          printf("F1\n");
    return 0;
    
}
