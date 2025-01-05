#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int x;
    x=0;
    do {
       scanf(" %c",&a);
       x++;
       }while (!isdigit(a));
        printf("%d",x);
    return 0;
}
