#include<stdio.h>
void selection_sort(int [],int);
int main()
{
 int a[50],n,i;
  printf("enter the number of elements");
 scanf("%d",&n);
 printf("\nprint %d array elements",n);
 for(i=0;i<n;i++)
 scanf("\n%d",&a[i]);
 selection_sort(a,n);
 printf("The array is sorted in selection sort as follows\n");
 for(i=0;i<n;i++)
 printf("\n%d",a[i]);
 return 0;
}
void selection_sort(int a[],int n)
{
int i,j,swap,s;
for(i=0;i<n;i++)
{
 s=i;
 for(j=i+1;j<n;j++)
{
 if(a[s]>a[j])
 s=j;
}
 if(s!=i)
 {
  swap=a[i];
  a[i]=a[s];
  a[s]=swap;
 }
}
}
