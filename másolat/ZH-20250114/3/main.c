//3 feladat
#include <stdio.h>
#include <stdlib.h>

int fvg(char a, char b)
{
  int sz = 0;
  if (a >= '0' && a <= '9')
  {
    sz++;
  }
  if (b >= '0' && b <= '9')
  {
    sz++;
  }

  return sz;
}



int main()
{
    char a='4';
    char b='e';
    int x;
    x=fvg(a,b);
    printf("%d",x);
    return 0;
}
