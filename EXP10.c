#include <stdio.h>
int btod(int bin)
{
  if (bin==0)
    return 0;
  else 
    return btod(bin/10)*2+(bin%10);
}
int main()
{
  int bin,deci;
  printf("enter the binary number");
  scanf("%d",&bin);
  deci=btod(bin);
  printf("decimal equivalents=%d",deci);
  return 0;
}