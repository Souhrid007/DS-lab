#include<stdio.h>
int main()
{
int s[50][50],i,j,k;
int size=0;
int r,c;
printf("Enter number of rows:");
scanf("%d",&r);
printf("Enter number of colomns:");
scanf("%d",&c);
printf("Enter the matrix\n");
for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   scanf("%d",&s[i][j]);
  }
 }
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(s[i][j]!=0)
   size+=1;
  }
 }
 int a[size][3];
 k=0;
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
   if(s[i][j]!=0)
   {
    a[k][1]=i+1;
    a[k][2]=j+1;
    a[k][3]=s[i][j];
    k++;
   }
  }
 }
printf("row\tcolumn\tvalue\n");
 for(i=0;i<size;i++)
{
 for(j=0;j<3;j++)
 {
  printf("%d",a[i][j]);
  printf("\t");
 }
printf("\n");
}
 return 0;
}
