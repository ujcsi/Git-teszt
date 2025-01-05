#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[]={1,2,3,4,5};
    int t1[]={2,4,6,8,10};
    int i,j,v,x,y,k;

    for (i=0;i<5;i++){
            v=1;
            for (j=0;j<i;j++){
                if (t[i]==t[j]){
                    v=0;
                }

            }
            if (v) {
                printf("%d,",t[i]);
            }
    }
    //printf("\n");
    for (x=0;x<5;x++){
            v=1;
            for (y=0;y<x;y++){
                if (t1[x]==t1[y]){
                    v=0;
                }
            }
            for (k=0;k<5;k++){
                if (t1[x]==t[k]){
                    v=0;
                }
            }

            if (v) {
                printf("%d,",t1[x]);
            }
    }




/*
    for (x=0;x<6;x++){
            v=1;
            for (y=0;y<=x;y++){
                if (t1[x]==t1[y]&&((x!=0)&&(y!=0))){
                    v=0;
                }
                for (k=0;k<6;k++){
                    if (t1[x]==t[k]){
                        v=0;
                    }

                }
            }
            if (v) {
                printf("%d,",t1[x]);
            }
    }
*/
 //   printf("Hello world!\n");
    return 0;
}
