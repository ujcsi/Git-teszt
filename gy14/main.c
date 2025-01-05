#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,o,m;
    for (i=10;i<=1000;i++){
        o=0;
        m=i%100;
        for (k=1;k<=m;k++) {
            if (m%k==0) {
                o++;
            }
        }
        if (o==2){
            printf("%d ",i);
        }
    }
    return 0;
}
