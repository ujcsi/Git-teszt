#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    int h,i,s;
    gets(t);
    h=strlen(t);
    s=0;
    for (i=0;i<h;i++){
        if ((t[1])==(t[i])){
            s++;
        }

    }
    printf("%d",s);

    return 0;
}
