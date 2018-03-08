
#include <stdio.h>
void main()
{
  int g, k, i, temp, num, rem;
  g=150;
  k=160;
  printf("Enter interval",g,k);
  scanf("%d %d", &g, &k);
  printf("Armstrong numbers between %d an %d are", g, k);
  for(i=g+1; i<k; ++i)
  {
	  temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
          printf("%d ",i);
      }
