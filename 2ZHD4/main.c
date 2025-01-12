#include <stdio.h>
#include <stdlib.h>
typedef struct au
{
    int tomeg;
    char rsz[3];
}autoo;


int main()
{
    autoo kocsi[10];
    int i,j,db;
    for (i=0;i<10;i++){
            scanf("%d,%s",&kocsi[i].tomeg,&kocsi[i].rsz);
    }

    for (i=0;i<10;i++){
         db=0;
        for (j=0;j<3;j++){
            if (((kocsi[i].rsz[j])=='a')||((kocsi[i].rsz[j])=='A')){
                    db++;
            }

        }
        if (db>0){
            printf("%d \n",kocsi[i].tomeg);
        }
    }
return 0;
}
