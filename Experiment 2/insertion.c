#include<stdio.h>
void insertion_sort(int[],int);
int main()
{
 int a [50],n,i;
 printf("Enter the number of elements");
 scanf("%d",&n);
 printf("\nprint %d array elements",n);
 for(i=0;i<n;i++)
 scanf("\n%d",&a[i]);
 insertion_sort(a,n);
 printf("The array is sorted in insertion sort as");
 for(i=0;i<n;i++)
 printf("\n %d",a[i]);
 return 0;
}
void insertion_sort(int a[],int n)
{
 int i,j,swap;
 for(i=0;i<n;i++)
 {
  for(j=i-1;j>=0;j--)
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
