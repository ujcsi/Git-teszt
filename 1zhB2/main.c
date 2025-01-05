#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,x,o,sz;
    for (i=10000;i>=100;i--){
        if (i%4==0){
        /*    if  (i=10000){
                sz=i/10000;
                o=0;
                for (x=1;x<=sz;x++){
                    if (sz%x==0)
                        o++;
                        if (o>2){
                            printf("%d ",i);
                        }
               }
             }
         */     if ((i>=1000)&&(i<10000)){
                sz=i/1000;
                o=0;
                for (x=1;x<=sz;x++){
                    if (sz%x==0)
                        o++;
                        if (o>2){
                            printf("%d ",i);
                        }
                }
            }
            else if (i<1000){
                sz=i/100;
                o=0;
                for (x=1;x<=sz;x++){
                    if (sz%x==0)
                        o++;
                        if (o>2){
                            printf("%d ",i);
                        }
                }
            }
            else if (i=10000){
                sz=i/10000;
                o=0;
                for (x=1;x<=sz;x++){
                    if (sz%x==0)
                        o++;
                        if (o=1){
                            printf("%d ",i);
                        }
                }
            }

        }
    }
    printf("Hello world!\n");
    return 0;
}
