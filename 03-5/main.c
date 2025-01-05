#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=1;i<=10000;i++){
            if ((i/10)%10==7){
                printf(" %d ",i);
        }

    }
    printf("Hello world!\n");
    return 0;
}
