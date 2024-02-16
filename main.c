#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x, y, z;
  scanf("%c%c%c",&x,&y,&z);
  if(x==y&&x==z)
  printf("Won");
  else
  printf("Lost");
  return 0;
}
