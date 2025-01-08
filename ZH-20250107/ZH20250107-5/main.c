#include <stdio.h>
#include <stdlib.h>

typedef struct kand{
        int tomeg;
        float terfogat;
}kandallo;

int main()
{
    kandallo k1,k2;
    scanf("%d,%f",&k1.tomeg,&k1.terfogat);
    scanf("%d,%f",&k2.tomeg,&k2.terfogat);
    if (k1.tomeg<k2.tomeg){
            printf("%d,%.2f",k1.tomeg,k1.terfogat);
    }
    else {
            printf("%d,%.2f",k2.tomeg,k2.terfogat);
    }
    return 0;
}
