#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sz;
    for (i=10000;i>99;i--){
            if (i==10000){
                sz=i/10000;
            }
            if ((i>999)&&(i<10000)){
                sz=i/1000;
            }
            if ((i>99)&&(i<1000)){
                sz=i/100;
            }
            if (i%sz==0){
                printf("%d ",i);
            }
    }



    printf("Hello world!\n");
    return 0;
}
