#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,j,k,s,o;
    for (i=1;i<=100;i++) {
        o=0;
        for (j=1;j<i;j++) {
            if (i%j==0) {
                o=o+j;
            }


        }
        if (o>j) {
            printf("%d\n",i);
        }


}
return 0;
}
