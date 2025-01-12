#include <stdio.h>
#include <stdlib.h>

int fgv(int x){
    int elozo,elozoe;
    if (x==1){
        return 2;
    }
    if (x==2){
        return 2;
    }
    elozo=fgv(x-1);
    elozoe=fgv(x-2);
return (elozo*elozoe)*2;
}

int main()


{
    int a=4;
    int c;
    c=fgv(a);
    printf("%d",c);
    return 0;
}
