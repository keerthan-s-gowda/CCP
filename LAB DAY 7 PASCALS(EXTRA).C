#include<stdio.h>
#include<conio.h>
int main()
{
 int arr[7][7]={0};
 int i,j,rows=2,col;
 clrscr();
 arr[0][0]=arr[1][0]=arr[1][1]=1;
 while(rows<7)
 {
  arr[rows][0]=1;
  for(col=1;col<=rows;col++)
  {
   arr[rows][col]=arr[rows-1][col-1]+arr[rows-1][col];
   }
   rows=rows+1;
 }
 for(i=0;i<7;i++)
 {
   printf("\n");
   for(j=0;j<=i;j++)
   {
   printf("\t%d",arr[i][j]);
   }
  }
  getch();
  return(0);
}