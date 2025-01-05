#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    int x,i;
    scanf("%s",t);

    if (strstr(t, ".exe") != NULL || strstr(t, ".com") != NULL ||strstr(t, ".bat") != NULL) {
        printf("A fájl futtathato!\n");
    }
    else {
        printf("A fájl nem futtathato!\n");
    }
    return 0;
}
