#include <stdio.h>
#include <stdlib.h>
typedef struct teg
{
    float tomeg;
    int db;
}tegla;


int main()
{
    tegla t[20];
    int i,elem;
    float min;

    for (i=0;i<20;i++){
        scanf("%f,%d",&t[i].tomeg,&t[i].db);
    }
    min=(t[0].tomeg)*(t[0].db);
    elem=0;
    for (i=0;i<20;i++){
       if ((t[i].tomeg)*(t[i].db)<min){
        min=(t[i].tomeg)*(t[i].db);
        elem=i;
       }
    }
    printf("A legkisebb rakas: %f ez a %d rakas ",min,elem);
    return 0;
}
