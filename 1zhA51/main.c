#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for (i=10;i<=99;i++){
        for (j=0;j<=99;j++){
            if (i==j) {
                printf("%d,%d\n",i,j);
            }
        }
    }
    return 0;
}
