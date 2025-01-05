#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    x=0;
    do {
       z=y;
       scanf(" %d",&y);
       x++;
       }while (!(y<z));
        printf("%d",x);
    return 0;
}
