//1 feladat
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,x;
    for (i=10000;i>=10;i--){
        x=i%100;
        if (x==0){
            continue;
        }
        if ((i%x)==0){
            printf("%d ",i);
        }
    }
    return 0;
}
