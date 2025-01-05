#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10];
    int i,max=0,ind=0;
    for (i=0;i<10;i++){
        scanf("%d",&t[i]);
    }
    max=t[0];
    for (i=0;i<10;i++){
        if (t[i]>max) {
            max=t[i];
            ind=i;
        }
    }
    printf("A legnagyobb elem: %d a legnagyobb elem indexe: %d\n",max,ind+1);


    printf("Hello world!\n");
    return 0;
}
