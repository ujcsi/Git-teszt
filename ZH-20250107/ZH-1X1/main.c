#include <stdio.h>
#include <stdlib.h>

int main()
{
    //balr�l a m�sodik sz�mjegy ki�rat�sa
/*
    int i,a,m;
    m=0;
    for (i=0;i<=10000;i++){
        a=i;
            while (a>99){
                m=a%10;
                a=a/10;
            }
            m=a%10;
            if (i>9){
                printf(" %d %d ",i,m);
            }
    }
------------------------------------------------------------------------------------------*/
    /*balr�l a legels� sz�mjegy ki�rat�sa
    int i,a,m;
    m=0;
    for (i=0;i<=10000;i++){
        a=i;
            while (a>9){
                m=a%10;
                a=a/10;
            }
            m=a%10;

                printf(" %d %d ",i,m);

    }
---------------------------------------------------------------------------------------------*/
    // jobbr�l a m�sodik sz�mjegy ki�rat�sa
/*    int i,a,m;
    m=0;
    for (i=0;i<=10000;i++){
        a=i;
            if (a>9){
                a=a/10;
                m=a%10;
            }

            if (i>9){
                printf(" %d %d ",i,m);
            }
    }
----------------------------------------------------------------------------------------------*/

/*    Sz�mjegyek �sszead�sa
    int i,a,m,o;
    m=0;
    o=0;
    for (i=0;i<=10000;i++){
        a=i;
            while (a>9){
                m=a%10;
                o=o+m;
                a=a/10;
            }
            m=a%10;
            o=o+m;
            printf(" %d  %d ",i,o);
            o=0;

    }


-----------------------------------------------------------------------------------------------*/

    /*    Sz�mjegyek szorzata
    int i,a,m,o;
    m=0;
    o=1;
    for (i=0;i<=10000;i++){
        a=i;
            while (a>9){
                m=a%10;
                o=o*m;
                a=a/10;
            }
            m=a%10;
            o=o*m;
            printf(" %d  %d ",i,o);
            o=1;

    }

------------------------------------------------------------------------------------------------*/
    // Pr�msz�mok
    int i,j,o;
    for (i=1;i<=100;i++){
        o=0;
        for (j=1;j<=i;j++){
            if (i%j==0){
                o++;
            }
        }
        if (o==2){
            printf("%d,%d\n ",i,o);
        }
    }

    return 0;
}
