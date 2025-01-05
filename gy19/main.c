#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k,e;
    for (i=100;i<=999;i++) {
    k=i/10;
    k=k%10;
    e=i/100;
    if ((e>k)&&(e!=k)) {
        printf("%d-%d-%d\n",i,e,k);
    }

    }


    return 0;
}
