#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0;
    int tk,i,max,akt,szam,uszam,ok;
    FILE *fp;
    fp=fopen("in.txt","r");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");


    while ((fscanf(fp," %d",&tk))==1){
        th++;
    }
    rewind(fp);
    int t[th];
    for (i=0;i<th;i++){
        fscanf(fp,"%d",&t[i]);
    }
    for (i=0;i<th;i++){
        printf("%d ",t[i]);
    }
    printf("\n");
    printf("th: %d\n",th);

    max=t[0];

    for (i=0;i<th;i++){
        if (t[i]>max){
            max=t[i];
        }

    }
    printf("%d \n",max);
    fclose(fp);

    fp=fopen("out.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");

    fprintf(fp,"%d",max);
    fclose(fp);

    fp=fopen("minden.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");


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
    return 0;
}
