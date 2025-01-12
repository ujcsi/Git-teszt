#include <stdio.h>
#include <stdlib.h>

int fgv(int x, int y){
    int k;
    k=x-y;
    if (k<0){
        return k*-1;
    }
    else
        return k;

}


int main()
{
    int a=2;
    int b=5;
    int c;
    c=fgv(a,b);
    printf("%d",c);
    return 0;
}
