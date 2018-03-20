#include<stdio.h>
void main()
{
int X[50],i,g,max;
printf("Enter the range  :");
scanf("%d",&g);
printf("Enter the array values  :");
for(i=0;i<g;i++)
{
scanf("%d",&X[i]);
}
max=X[0];
for(i=0;i<g;i++)
{
if(X[i]>max)
{
max=X[i];
}
}
printf("%d",max);
}
