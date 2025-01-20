//4. feladat
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int th=0;
    int x,i,max;
    FILE *fp;
    int *t=NULL;


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
    fclose(fp);

    fp=fopen("out.txt","w");
    if (fp != NULL){
        printf("A fajl megnyitva!\n");
    }
    else {
            printf("Sikertelen a fajl megnyitasa!\n");
    }



    fclose(fp);

    free(t);
    return 0;
}












