#include <stdio.h>
#include <stdlib.h>

int dupla (int x){
    int d;
    d=x*2;
    return d;
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",dupla(a));
    return 0;
}
