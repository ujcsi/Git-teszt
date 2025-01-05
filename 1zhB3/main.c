#include <stdio.h>
#include <stdlib.h>

int main()
{


    int t[5][3]={{3,5,8},
                 {6,7,8},
                 {1,2,7},
                 {9,8,9},
                 {7,9,1}};

    int i,j;
    for (i=0;i<5;i++){
        for (j=1;j<3;j++){
            if (t[i][j]>t[i][j-1]){
                printf("%d ,",t[i][j]);
            }
        }
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
