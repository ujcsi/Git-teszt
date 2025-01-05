#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[4][5]={{"fGdRd"},
                  {"rFdsd"},
                  {"FrrfR"},
                  {"tTTtr"}};
    int i,j;
    for (i=0;i<4;i++){
        for (j=1;j<5;j++){
            if (isupper(t[i][j-1])){
                printf("%c ",t[i][j]);
            }

        }
        printf("\n");
    }



    printf("Hello world!\n");
    return 0;
}
