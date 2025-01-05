#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,o,k;
    for (i=10000;i>=100;i--){
            o=0;
        for (j=1;j<=i;j++){
            if (i%j==0) {
                o++;
            }
        }

        if ((o==6)&&(i<1000)){
             k=(i/10);
             if ((k%10)==3){
                printf("%d \n",i);
             }
        }
        if ((o==6)&&((i<10000)&&(i>999))){
             k=i/100;
             if (k%10==3){
                printf("%d \n",i);
            }
        }
    }
    //
    return 0;
}
