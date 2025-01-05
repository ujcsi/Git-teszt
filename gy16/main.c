#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,u,e;
    for (i=100;i<=1000;i++) {
        u=i%100;
        e=i/10;
        if (((u/2)==e)&&(u%2==0)) {
            printf("%d \n",i);
        }
    }

 return 0;
}
