#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k,s,o;
    for (i=1;i<=1000;i++) {
        o=0;
        for (j=1;j<=i;j++) {
            if (i%j==0) {
                o++;
            }

        }
        if (o==2) {
            s=0;
            k=i;
            while (k!=0) {
            s=s+(k%10);
            k=k/10;
            }
            if (s==8){
                printf("%d , %d\n",i,s);
            }


        }





    }









return 0;
}












