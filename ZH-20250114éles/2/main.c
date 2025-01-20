//2.feladat
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int t[5][5];
    int i,j,x,y,o,sz;
    srand(time(NULL));
        for (i=0;i<25;i++){
            x=i/5;
            y=i%5;
            t[x][y]=rand()%100+1;

        }
    for (i=0;i<25;i++){
            x=i/5;
            y=i%5;
            printf("%d ",t[x][y]);
            if (y==4){
            printf("\n");
            }
        }
        sz=0;
    for (i=0;i<25;i++){
            x=i/5;
            y=i%5;
            if (t[x][y]<=1){
            continue;
            }
            o=0;
            for (j=2;j<t[x][y];j++){
                if (t[x][y]%j==0){
                    o++;
                    break;
                }
            }
             if (o==0){
                sz++;
             }

    }
    printf("%d ",sz);
    return 0;
}
