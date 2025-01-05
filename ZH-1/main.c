#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,e,v;
    for (i=1;i<=10000;i++){
        a=(i*i);
        v=(i%10);
        e=a;
        while (e>9) {
         e=(e/10);
         }
        if (e==v) {
           printf("%d-%d\n",i,i*i);
       }
    }

    return 0;
}
