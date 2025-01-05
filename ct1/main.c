#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,sz,o;
    for (i=10000;i>=100;i--){
            if (i>999){
                sz=i/100;
                m=sz%10;
                o=0;
                if (m==3){
                    m=1;
                }
                else {
                    m=0;
                }

            }
            if ((i>99)&&(i<1000)){
                sz=i/10;
                m=sz%10;
                o=0;
                if (m==3){
                    m=1;
                }
                else {
                    m=0;
                }
            }
            for (j=1;j<=i;j++)
                if (i%j==0){
                    o++;
            }
            if ((m)&&(o==6)){
                printf("%d ",i);
            }
        }



    printf("Hello world!\n");
    return 0;
}
