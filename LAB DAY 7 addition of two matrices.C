#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 int i,j,row1,row2,col1,col2,row_sum,col_sum,mat1[5][5],mat2[5][5],sum[5][5];
 clrscr();
 printf("\n enter the number of rows in the frist matrix:");
 scanf("%d",&row1);
 printf("\n enter the number of column in the frist matrix:");
 scanf("%d",&col1);
 printf("\n enter the number of rows in the second matrix:");
 scanf("%d",&row2);
 printf("\n enter the number of column in the second matrix:");
 scanf("%d",&col2);
 if(row1!=row2||col1!=col2)
 {
  printf("\n the number of rows and columns should be equal to add matrices");
  getch();
  exit(0);
  }
  row_sum=row1;col_sum=col1;
  printf("\n enter the elements of frist matrix:");
  for(i=0;i<row1;i++)
  {
   for(j=0;j<col1;j++)
   scanf("%d",&mat1[i][j]);
  }
  printf("\n enter the elements of second matrix:");
  for(i=0;i<row2;i++)
  {
   for(j=0;j<col2;j++)
   scanf("%d",&mat2[i][j]);
  }
  for(i=0;i<row_sum;i++)
  {
   for(j=0;j<col_sum;j++)
   sum[i][j]=mat1[i][j]+mat2[i][j];
   }
   printf("\n the addition of two matrices are:");
   for(i=0;i<row_sum;i++)
   {
    for(j=0;j<col_sum;j++)
    printf("\t %d",sum[i][j]);
    }
  getch();
}
