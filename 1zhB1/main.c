#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[4];
    int i,j,db;

    gets(t);


    for (i=0;i<4;i++){
            db=0;
        for (j=0;j<4;j++){

            if (t[i]==t[j]){
               db++;
            }
        }
        printf("%c, %d \n",t[i],db);
    }

    //printf("Hello world!\n");
    return 0;
}
