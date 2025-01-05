#include <stdio.h>
#include <stdlib.h>

int main()
{


int eredmeny[10]={3,1,2,5,4,3,4,3,3,1};
float atlag=0,osszeg=0;
int i,meret,elem,db;

    meret=sizeof(eredmeny);
    elem=sizeof(eredmeny[0]);
    osszeg=0;
    db=meret/elem;
    printf("%d\n",db);
    for(i=0;i<db;i++)
        {
        osszeg=osszeg+eredmeny[i];
        }
    atlag=(osszeg/db);
    printf("A tanulamanyi atlag: %.2f\n",atlag);
    printf("%.f\n",osszeg);
    printf("%d\n",db);


    //printf("Hello world!\n");
    return 0;
}
