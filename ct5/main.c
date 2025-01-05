#include <stdio.h>
#include <stdlib.h>

int main()

{
    char c;
    int a;
    a=0;
    do
    {
      scanf(" %c",&c);
      a++;
    }
    while (!isdigit(c));
    printf("%d",a);
    return 0;
}
