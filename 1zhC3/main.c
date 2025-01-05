#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[3][5]={{5,3,6,9,6},
                 {6,8,9,9,1},
                 {20,20,1,32,19}};
    int i,j,s,o;
    o=0;
    for (i=0;i<5;i++){
        s=0;
        for (j=0;j<3;j++){
            s=s+(t[j][i]);
            if (s>30){
                o++;
            }
        }
    }
    printf("%d",o);
    //printf("Hello world!\n");
    return 0;
}
