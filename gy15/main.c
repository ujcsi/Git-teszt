#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,o;
    for (i=1;i<=100;i++) {
        o=0;
        for (j=1;j<=i;j++) {
            if (i%j==0) {
                o++;
            }
        }
        if (o%2!=0) {
            printf("%d-%d\n ",i,o);
        }
    }
    return 0;
}
