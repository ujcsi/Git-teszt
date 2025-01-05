#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    int i,j,max,db,h;
    puts("Kérem a sztringet: ");
    gets(t);
    h=strlen(t);
    max=0;
    for (i=0;i<h;i++){
        db=0;
        for (j=0;j<h;j++){
            if (t[i]==t[j]){
                db++;
            }
        }
        if (db>max){
            max=db;
        }
    }

    printf("%d ",max);
    return 0;
}
