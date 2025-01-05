#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    char t1[50];
    int i,j,h,h1,t1db,tdb,x;
    puts("kerem az elso sztringet:");
    gets(t);
    puts("kerem a masodik sztringet:");
    gets(t1);
    h=strlen(t);
    h1=strlen(t1);
    for (i=0;i<h1;i++){
            t1db=0;
        for (j=0;j<h1;j++){

            if (t1[i]==t1[j]){
                t1db++;
            }
            tdb=0;
            for (x=0;x<h;x++){
                if (t1[i]==t[x]){
                    tdb++;
                }
            }
            if (t1db>tdb){
                printf("%c",t1[i]);
            }
        }
    }
    //printf("Hello world!\n");
    return 0;
}
