#include <stdio.h>
#include <stdlib.h>
typedef struct ku
{
    float tomeg;
    int fogdb;
}kutya;


int main()
{
    kutya t[20];
    int i,elem;
    float max;

    for (i=0;i<20;i++){
        scanf("%f,%d",&t[i].tomeg,&t[i].fogdb);
    }
    max=(t[0].tomeg)*(t[0].fogdb);
    elem=0;
    for (i=0;i<20;i++){
       if ((t[i].tomeg)*(t[i].fogdb)>max){
        max=(t[i].tomeg)*(t[i].fogdb);
        elem=i;
       }
    }
    printf("A legerõsebb kutya: %f, %d , %f ",t[elem].tomeg,t[elem].fogdb,max);
    return 0;
}
