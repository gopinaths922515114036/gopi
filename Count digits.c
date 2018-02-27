#include<stdio.h>
#include<conio.h>
void main()
{
int count,h;
printf("enter the number");
scanf("%d",&h);
while(h!=0)
{
h=h/10;
count++;
}
printf("%d",count);
}
