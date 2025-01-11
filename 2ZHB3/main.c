#include <stdio.h>
#include <stdlib.h>

int fgv(int x){
    int elozo;
    if (x==1){
        return 2;
    }
    elozo=fgv(x-1);
return (elozo*3)*(elozo*3);
}

int main()


{
    int a=3;
    int c;
    c=fgv(a);
    printf("%d",c);
    return 0;
}
