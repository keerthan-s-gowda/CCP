#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,sum,diff,product,mod;
 int*ptr1,*ptr2;
 float divi;
 clrscr();
 ptr1=&num1;
 ptr2=&num2;
 printf("\n enter any two numbers :");
 scanf("%d %d",ptr1,ptr2);
 sum=*ptr1+*ptr2;
 diff=*ptr1-*ptr2;
 product=*ptr1**ptr2;
 divi=(float)*ptr1/ *ptr2;
 mod=*ptr1 % *ptr2;
 printf("\n sum=%d",sum);
 printf("\n difference=%d",diff);
 printf("\n product=%d",product);
 printf("\n divison=%f",divi);
 printf("\n modulo=%d",mod);
 getch();
 }
