/*2. Adj meg egy v�letlen sz�mokb�l [1;100] int-ekb�l �ll� 5x5-�s
t�mb�t, majd �rasd ki, h�ny pr�m sz�m van benne!*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int t[5][5];
    int i,j,k,o,sz;
    sz=0;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
                t[i][j]=rand()%100+1;

        }
    }
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
                printf("%d ",t[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            o=0;
            for (k=2;k<t[i][j];k++){
                if (t[i][j]%k==0){
                    o++;
                }

            }
            if (o==0){
                sz++;
                }
        }
    }
    printf("%d",sz);
    //printf("Hello world!\n");
    return 0;
}
