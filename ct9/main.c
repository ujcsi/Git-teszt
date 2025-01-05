#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[21];
    int i,h;
    gets(t);
    h=strlen(t);
    for (i=1;(i<(h));i++){
            if ((isupper(t[i-1]))||(isupper(t[i+1]))){
                printf("%c",t[i]);
            }

    }
    return 0;
}
