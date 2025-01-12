#include <stdio.h>
#include <stdlib.h>

float fgv(float x[3][3]){
            float r=1;
            int i,j;
            for (i=0;i<3;i++){
                for (j=0;j<3;j++){
                    r=r*(x[i][j]);
                }
            }
            return r;



}



int main()
{
    float t[3][3]={{2,2,3},
                  {1,3,2},
                  {3,2,1}};
    float s;
          s=fgv(t);

    printf("%f",s);
    return 0;
}
