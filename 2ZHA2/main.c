#include <stdio.h>
#include <stdlib.h>

char fgv (char x[10]){
    int i,h;
    char min;
    h=strlen(x);
    min=x[0];
    for (i=0;i<h;i++){
        if (x[i]<min){
            min=x[i];
        }
    }
    return min;
}

int main()
{
    char t[10]={"zlmafgtzsf"};
    char c;
   c=fgv(t);

    printf("%c",c);
    return 0;
}
