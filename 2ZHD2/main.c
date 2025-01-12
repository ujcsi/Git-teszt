#include <stdio.h>
#include <stdlib.h>

float fgv(int x, int y, float t1[x][y]){

            int i,j;
            float t=0;


            for (i=0;i<y;i++){
                t=t+t1[0][i];
                t=t+t1[x-1][i];
            }
            for (i=1;i<x-1;i++){
                t=t+t1[i][0];
                t=t+t1[i][y-1];
            }
            return t;


}

int main()
{
    float t[4][6]={{1,2,3,5,1,1},
                   {2,9,2,4,1,1},
                   {3,1,1,4,1,1},
                   {5,4,1,2,1,1}};
    int sor,oszlop;
    float s;
    sor=sizeof(t)/sizeof(t[0]);
    oszlop=sizeof(t[0])/sizeof(t[0][0]);
    s=fgv(sor,oszlop,t);


    printf("%d ,%d ,%f ",sor,oszlop,s);
    return 0;
}
