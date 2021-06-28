#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,mat[2][2],transpose[2][2];
  clrscr();
  printf("\n enter the elements of the matrix:");
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("\n mat[%d][%d]=",i,j);
      scanf("%d",&mat[i][j]);
    }
   }
  for(i=0;i<3;i++)
  {
    for(j=0;j<2;j++)
    transpose[i][j]=mat[j][i];
  }
  printf("\n the elements after transpose operation is applied on matrix is:");
  for(i=0;i<2;i++)
  {
   for(j=0;j<2;j++)
    printf("\t%d",transpose[i][j]);
   }
   getch();
   }
