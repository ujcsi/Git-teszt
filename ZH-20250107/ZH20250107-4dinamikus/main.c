#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0;
    int x,i,n,max,szam,uszam,akt,ok;
    FILE *fp;
    int *t=NULL;

    //file kezel�s megnyit�s

    fp=fopen("in.txt","r");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");

    //megsz�molja h�ny db int van benne

    while ((fscanf(fp," %d",&x))==1){
        th++;
    }
    //file pointer a file elej�re ker�l
    rewind(fp);


   //dinamikus mem�ria foglal�s annyi db int-et foglal amennyit megsz�moltunk ez a th v�ltoz�ba ker�l
    t=(int)malloc(th*sizeof(int));

     if (t==NULL){
        printf("Sikertelen memoria foglalas!\n");
        return 1;
    }

    //f�ljb�l beolvassuk az eg�szeket a lefoglalt dinamukus tombbe
    for (i=0;i<th;i++){
        fscanf(fp,"%d",&t[i]);
    }
    // a dinamikus t�mb ki�rat�sa
    for (i=0;i<th;i++){
        printf("%d ",t[i]);
    }
    printf("\n");

    //tombhossz ki�rat�sa
    printf("th: %d\n",th);

    //legnagyobb elem kikeres�se
    max=t[0];

    for (i=0;i<th;i++){
        if (t[i]>max){
            max=t[i];
        }

    }
    //ki�rja a legnagyobb elemet
    printf("%d \n",max);
    //fajl bez�r�sa
    fclose(fp);

    //file kezel�s megnyit�s

    fp=fopen("out.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");

    //fajlba �rja a legnagyobbat
    fprintf(fp,"%d",max);
    fclose(fp);

    //file kezel�s megnyit�s

    fp=fopen("minden.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");


    // kiszedi aminek a sz�mjegyei azonosak
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

    //memoria felszabad�t�sa
    free(t);
    return 0;
}
