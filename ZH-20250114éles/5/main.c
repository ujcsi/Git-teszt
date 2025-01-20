//5. feladat
#include <stdio.h>
#include <stdlib.h>

typedef struct tan{
        int kod;
        char nev[31];
}tanulo;

int main()
{
        int i;
        tanulo t[10];
        for (i=0;i<=10;i++){
            scanf("%d,%s",&t[i].kod,t[i].nev);
        }
        for (i=0;i<=10;i++){
            printf("%d,%s",t[i].kod,t[i].nev);
        }
    return 0;
}
