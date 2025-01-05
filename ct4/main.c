#include <stdio.h>
#include <stdlib.h>

int main()
{int t[10]={10,21,3,6,76,43,99,12,44,11};
    int i,sz;
    for (i=0;i<10;i++){
         sz=(t[i]*3);
         if ((int)sqrt(sz)*(int)sqrt(sz)==sz){
            printf("%d ",t[i]);
         }

    }
    printf("Hello world!\n");
    return 0;
}
