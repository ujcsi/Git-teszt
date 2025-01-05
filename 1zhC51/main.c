#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for (i=99;i>=0;i--){
        for (j=99;j>=0;j--){
            if (j==i*i){
                printf("%d.%d\n",i,j);
            }
        }
    }
    return 0;
}
