#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("Enter the a,b,c values: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    printf("%d is the largest number.", a);
    else if(b>=c)
    printf("%d is the largest number.",b);
    else
    printf("%d is the largest number.", c);
 
}

