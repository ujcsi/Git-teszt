/*5. Írj programot, melyben a tanulo típusnak két mezője van: egy int
típusú mező:kod, illetve egy minimum 30 karaktert tartalmazni bíró
mező: nev. Kérj be 10 tanulo típusú elemet, majd írasd ki a névsorban
az első adatait (feltehetjük, hogy nincs szóköz a nevekben, valamint
csak az angol ábécé kisbetűiből állnak)!*/
#include <stdio.h>
#include <stdlib.h>

typedef struct tan{
        int kod;
        char nev[31];
}tanulo;

int main()
{
        tanulo t[10];
        int i,index;
        char c;
        for (i=0;i<10;i++){
            scanf("%d,%s",&t[i].kod,&t[i].nev);
        }
        for (i=0;i<10;i++){
            printf("%d %s\n",t[i].kod,t[i].nev);
        }
        c=t[0].nev[0];
        for (i=0;i<10;i++){
            if (t[i].nev[0]<c){
                c=t[i].nev[0];
                index=i;
            }
        }
        printf("A legelsõ: %d %s \n",t[index].kod,t[index].nev);









    return 0;
}
