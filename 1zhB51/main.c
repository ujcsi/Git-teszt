#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,sz,e,m;
    for (i=0;i<=99;i++){
        for (j=0;j<=99;j++){
            m=i%10;
            e=i/10;
            sz=m*10+e;
            if (sz==j){
                printf("%d,%d\n",i,j);
            }
        }
    }
    printf("Hello world!\n");
    return 0;
}
