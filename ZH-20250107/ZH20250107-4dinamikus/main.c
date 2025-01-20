#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0;
    int x,i,n,max,szam,uszam,akt,ok;
    FILE *fp;
    int *t=NULL;

    //file kezelés megnyitás

    fp=fopen("in.txt","r");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");

    //megszámolja hány db int van benne

    while ((fscanf(fp," %d",&x))==1){
        th++;
    }
    //file pointer a file elejére kerül
    rewind(fp);


   //dinamikus memória foglalás annyi db int-et foglal amennyit megszámoltunk ez a th változóba kerül
    t=(int)malloc(th*sizeof(int));

     if (t==NULL){
        printf("Sikertelen memoria foglalas!\n");
        return 1;
    }

    //fáljból beolvassuk az egészeket a lefoglalt dinamukus tombbe
    for (i=0;i<th;i++){
        fscanf(fp,"%d",&t[i]);
    }
    // a dinamikus tömb kiíratása
    for (i=0;i<th;i++){
        printf("%d ",t[i]);
    }
    printf("\n");

    //tombhossz kiíratása
    printf("th: %d\n",th);

    //legnagyobb elem kikeresése
    max=t[0];

    for (i=0;i<th;i++){
        if (t[i]>max){
            max=t[i];
        }

    }
    //kiírja a legnagyobb elemet
    printf("%d \n",max);
    //fajl bezárása
    fclose(fp);

    //file kezelés megnyitás

    fp=fopen("out.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");

    //fajlba írja a legnagyobbat
    fprintf(fp,"%d",max);
    fclose(fp);

    //file kezelés megnyitás

    fp=fopen("minden.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");


    // kiszedi aminek a számjegyei azonosak
    for (i=0;i<th;i++){
        szam=t[i];
        uszam=szam%10;
        szam=szam/10;
        ok=1;
        while (szam>0){
            akt=szam%10;
            if (akt!=uszam){
                ok=0;
            }
            szam=szam/10;
        }

        if (ok){
            printf("%d ",t[i]);
            fprintf(fp,"%d ",t[i]);
           // fprintf(fp,"%c",' ');
        }
    }
    fclose(fp);

    //memoria felszabadítása
    free(t);
    return 0;
}
