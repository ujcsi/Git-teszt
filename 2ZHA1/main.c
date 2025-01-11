#include <stdio.h>
#include <stdlib.h>

int fvg(int x, int y){
    int xs=1;
    int ys=1;
    int m=1;
    while (x>0){
        m=x%10;
        x=x/10;
        xs=xs*m;

    }
    m=1;
    while (y>0){
        m=y%10;
        y=y/10;
        ys=ys*m;
    }
    return ys*xs;


}

int main()
{
    int a=223;
    int b=24;
    int c;
    c=fvg(a,b);
    printf("%d \n",c);
    return 0;
}
