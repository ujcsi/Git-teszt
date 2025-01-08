#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sz;
    for (i=10;i<=9999;i++){
            sz=i;
                if (sz>99){
                    while (sz>99){

                        sz=sz/10;
                       // printf(" %d  \n",sz);
                    }
                }

                        sz=sz%10;

                if ((((i*i*i)%10)==sz)&&(i%41==0)){
                    printf("%d ",i);
                }



    }
    //printf("Hello world!\n");
    return 0;
}
