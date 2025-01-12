#include <stdio.h>
#include <stdlib.h>

int fvg(char x, char y){
    if (x==y){
        return 1;
    }
    else {
        return 0;
    }
}


int main()
{
    char a='a';
    char b='c';
    int v;

    v=fvg(a,b);

    printf("%d",v);
    return 0;
}
