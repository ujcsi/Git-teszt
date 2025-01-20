/*4. Írj programot, mely az in.txt szöveges állományban lévő
szóközökkel elválasztott pozitív egész számok közül kiírja az out.txt
állományba azokat, amelyekben van minimum két ugyanazon
számjegy! Feltehetjük, hogy az állományban olyan számok vannak
(nem tudjuk, hogy hány darab), melyek az int típusba beleférnek. Pl.
011, 444, 556623.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0;
    int x,i,j,k,max,szam,jegy;
    FILE *fp;
    FILE *fpp;
    int *t=NULL;
    int szamlalo[10]={0};


    fp=fopen("in.txt","r");
    if (fp != NULL){
        printf("A fajl megnyitva!\n");
    }
    else {
	     printf("Sikertelen a fajl megnyitasa!\n");
	 }

    while ((fscanf(fp," %d",&x))==1){
        th++;
    }
    rewind(fp);


    t=(int)malloc(th*sizeof(int));

     if (t==NULL){
        printf("Sikertelen memoria foglalas!\n");
        return 1;
         }


    for (i=0;i<th;i++){
        fscanf(fp,"%d",&t[i]);
    }
    fclose(fp);
  // a dinamikus tömb kiíratása
    for (i=0;i<th;i++){
        printf("%d ",t[i]);
    }
    printf("\n");

    //tombhossz kiíratása
    printf("th: %d\n",th);

    fpp=fopen("out.txt","w");
    if (fpp != NULL){
        printf("A fajl megnyitva!\n");
    }
    else {
            printf("Sikertelen a fajl megnyitasa!\n");
    }


    for (i=0;i<th;i++){
        szam=t[i];
        while (szam>0){
            jegy=(szam%10);
            szam=szam/10;
            szamlalo[jegy]++;
        }
        for (j=0;j<10;j++){
            if (szamlalo[j]>=2){
                fprintf(fpp,"%d ",t[i]);
                fprintf(fp,"%c",' ');

            }
        }
        for (k=0;k<10;k++){
                szamlalo[k]=0;
        }



    }

    fclose(fpp);

    free(t);
    return 0;
}
