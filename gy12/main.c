#include <stdio.h>
#include <stdlib.h>

int main()
{
    char i,j;
    for (i='a';i<='j';i++) {
        //printf("%c ",i);
        for (j='a';j<='j';j++){
           printf("%c%c ",i,j);
        }
    printf("\n");
    }

    //printf("Hello world!\n");
    return 0;
}

