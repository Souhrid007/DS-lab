#include<stdio.h>
void bubble_sort(int[],int);
int main()
{
 int a [50],n,i;
 printf("Enter the number of elements");
 scanf("%d",&n);
 printf("\nprint %d array elements",n);
 for(i=0;i<n;i++)
 scanf("\n%d",&a[i]);
 bubble_sort(a,n);
 printf("The array is bubble sorted as");
 for(i=0;i<n;i++)
 printf("\n %d",a[i]);
 return 0;
}
 void bubble_sort(int a[],int n)
{
 int swap,i,j;
 for(i=0;i<n;i++)
{
  for(j=0;j<n-i-1;j++)
{
   if(a[j]>a[j+1])
   {
    swap=a[j];
    a[j]=a[j+1];
    a[j+1]=swap;
    }
}
}
}
