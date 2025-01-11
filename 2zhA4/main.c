#include <stdio.h>
#include <stdlib.h>
typedef struct telefon
{
    float tomeg;
    char tipus[20];

}tel;

int main()
{
    tel t[20];
    int i,j;
    tel cs;
    float kis;
    char g='x';
    for (i=0;i<20;i++){
        scanf("%f",&t[i].tomeg);
        scanf("%s",&t[i].tipus);
    }
    for (i=0;i<3;i++){
        printf("%.2f, %s \n",t[i].tomeg,t[i].tipus);
    }
    printf("\n");
    for (i=0;i<19;i++){
        for (j=i;j<20;j++){
            if ((t[i].tomeg)>(t[j].tomeg)){
                    cs=t[i];
                    t[i]=t[j];
                    t[j]=cs;
            }
        }

    }
    for (i=0;i<20;i++){
        printf("%.2f, %s \n",t[i].tomeg,t[i].tipus);
    }
    kis=t[0].tomeg;

    printf("\n");

    for (i=0;i<20;i++){
            if (((t[i].tomeg)==(t[0].tomeg))&&((t[i].tipus[0])=='x')){
                printf("%02f ",t[i].tomeg);
            }




    }
    return 0;
}
