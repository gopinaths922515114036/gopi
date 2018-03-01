#include<stdio.h>  
void main()
{ 
    int g,b=0,c,i;
    scanf("%d",&g);
    while(g!=0)
    {
        c=g%10;
        b=b*10+c;
        g/=10;
    }
    {
    if(i==b)
    printf("palindrome");
    else
    printf("not");
}
}   
