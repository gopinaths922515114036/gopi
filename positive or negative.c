#include<stdio.h>
int main()
{
int b;
  printf ("Enterthe value:\n",b);
  scanf("%d",&b);
  if(b<0)
  {
    printf("The value%dis negative!!!\n",b);
  }
  if(b>0)
  {
    printf("The value %d is positive!!!\n",b);
  }
  if(b==0)
  {
    printf("The number is zero!!!!\n",b);
  }
  return 0;
}
