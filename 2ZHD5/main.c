#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0;
    int i,a;
    char x,d;
    FILE *fp;
    int c[255]={0};
    char cc[255];
    memset(c,'\0', sizeof(c));

    fp=fopen("in.txt","r");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else {
        printf("A fajl megnyitasa sikertelen!\n");
    }

    while ((fscanf(fp," %c",&x))==1){
        th++;
    }
    rewind(fp);
    printf("%d\n",th);


    char t[th];
    for (i=0;i<th;i++){
        fscanf(fp," %c",&t[i]);
    }

    for (i=0;i<th;i++){
        printf("%c ",t[i]);
    }
    printf("\n");
    printf("th: %d\n",th);

    fclose(fp);

    for (i=0;i<th;i++){
         a=t[i];
         c[a]++;
         cc[a]=t[i];
    }
    for (i=0;i<255;i++){
        printf("%d,%c\n",c[i],cc[i]);
    }


    fp=fopen("out.txt","w");
    if (fp != NULL){
        printf("A fajl sikeresen megnyitva! \n");
    }
    else {
        printf("A fajl megnyitasa sikertelen!\n");
    }

    for (i=0;i<255;i++){
        if (c[i]>0){
            fprintf(fp,"%c %d",cc[i],c[i]);
            fprintf(fp,"\n");
        }
    }
    fclose(fp);
    return 0;
}
