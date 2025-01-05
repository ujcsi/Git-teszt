#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,o,k,j;
    for (i=1;i<=100;i++) {
        o=0;
        k=i/2;
        for (j=1;j<=k;j++) {
            if (k%j==0) {
               o++;
            }
        }
      if (o>2) {
        printf("szam %d-fele %d-oszto %d\n",i,k,o);
      }
    }
    return 0;
}
