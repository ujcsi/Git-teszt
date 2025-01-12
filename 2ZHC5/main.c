#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0;
    int tk,i,max,akt,szam,uszam,ok;
    int eszam;
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

    fclose(fp);

    fp=fopen("out.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else printf("A fajl megnyitasa sikertelen!\n");

    for (i=0;i<th;i++){
        szam=t[i];
        uszam=szam%10;
        while (szam>0){
            eszam=szam%10;
            szam=szam/10;
        }
        if (eszam==uszam){
            fprintf(fp,"%d ",t[i]);
        }
    }
    fclose(fp);
    return 0;
}
