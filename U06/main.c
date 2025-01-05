#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[]={1,2,3,4,5};
    int t1[]={2,4,6,8,10};
    int i,j,v,x,y,k;

    for (i=0;i<5;i++){
        v=0;
        for (j=0;j<5;j++){
            if (t[i]==t1[j]){
                v=1;
            }

        }
        if (v){
            printf("%d,",t[i]);
        }


    }
    return 0;
}
