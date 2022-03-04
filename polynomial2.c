#include <stdio.h>
void main()
{
int n1,n2,p[10][10],p1[10][2],p2[10][2],i;
printf("Enter the no. of terms of [first second] polynomial\n");
scanf("%d %d",&n1,&n2);
printf("Enter the [coefficient exponent] of the first array\n");
for(i=0;i<n1;i++)
 scanf("%d %d",&p1[i][0],&p1[i][1]);
printf("Enter the [coeficient expomemt] of second array\n");
for(i=0;i<n2;i++)
 scanf("%d %d",&p2[i][0],&p2[i][1]);
i=0;
int j=0,k=0;
while(i<n1&&j<n2)
{
 if(p1[i][1]>p2[j][1])
 {
  p[k][0]=p1[i][0];
  p[k][1]=p1[i][1];
  i++;k++;
}
 else if(p1[i][1]<p2[j][1])
      {
	p[k][0]=p2[j][0];
	p[k][1]=p2[j][1];
  	j++;k++;
      }
 else if(p1[i][1]==p2[j][1])
{
p[k][0]=p1[i][0]+p2[j][0];
p[k][1]=p1[i][1];
i++;j++;k++;
}
}
while (i<n1){
  p[k][0]=p1[i][0];
  p[k][1]=p1[i][1];
  i++;k++;
}
while(j<n2){
  p[k][0]=p2[j][0];
p[k][1]=p2[j][1];
j++;k++;
}
printf("The added polynomial is\n");
for( i=0;i<k;i++){
  printf("%dx^%d+  ",p[i][0],p[i][1]);
}
}
