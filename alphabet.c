#include <stdio.h>
int main()
{
  char g;
  printf("enter the character: ");
  scanf("%c",&g);
  if(g>='a' && g<='z')
{
  printf("%cis a  alphabet.",g);
} 
else
{
  printf("%cis a not an alphabet.",g);
}
return 0;
}
