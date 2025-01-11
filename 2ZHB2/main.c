#include <stdio.h>
#include <stdlib.h>

int fgv(int x[4][4]){
       int max=0;
       int i,j;
       max=x[0][0];
       for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (x[i][j]>max){
                max=x[i][j];
            }
        }
       }
return max;


}

int main()
{
    int t[4][4]={{62,7,12,6},
                 {1,2,6,7},
                 {5,3,1,0},
                 {6,15,6,7}};
    int c;
    c=fgv(t);



    printf("%d",c);
    return 0;
}
