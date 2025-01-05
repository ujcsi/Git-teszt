#include <stdio.h>
#include <stdlib.h>

int main()
{   char t [3][5]={{"Rtwrb"},
                   {"Hzrew"},
                   {"Fgqre"}};
    int i,j,db,sor;
    sor=0;
    for (i=0;i<3;i++){
            db=0;
        for (j=0;j<5;j++){
            if (islower(t[i][j])){
                db++;
            }
        }
            if (db>3){
                sor++;
            }
    }


    printf("%d\n",sor);
    return 0;
}
