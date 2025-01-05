#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()

{
    char t[5][6]={{"aDcDs"},
                  {"DcdSd"},
                  {"RfdDw"},
                  {"eReEE"}};
    int i,j;
    for (i=0;i<4;i++){
        for (j=1;j<5;j++){
            if (isupper(t[i][j-1])){
                printf("%c ",t[i][j]);
            }

        }
        printf("\n");

    }


    return 0;
}
