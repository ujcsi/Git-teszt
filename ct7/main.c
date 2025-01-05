#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[3][5]={{24,24,24,24,24},
                 {3,3,3,6,3},
                 {1,1,1,1,6}};
    int i,j,s,db;
    db=0;
    for (i=0;i<5;i++){
            s=0;
        for (j=0;j<3;j++){
            s=s+t[j][i];
        }
        if (s>30){
            db++;
        }
    }
    printf("%d",db);
    return 0;
}
