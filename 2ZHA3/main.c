#include <stdio.h>
#include <stdlib.h>

void fgv(int x, int *y){
    *y=2*x;
}

int main()
{
    int a,b;
    a=100;
    b=50;
    fgv(a,&b);
    printf("%d",b);
    return 0;
}
