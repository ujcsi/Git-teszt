#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[6]="BaBBd";
    int i,a,s;
    s=0;
    a=strlen(t);
    for (i=0;i<(a-1);i++){
        if ((islower(t[i]))&&(isupper(t[i+1]))){
            s++;
        }
        if ((isupper(t[i]))&&(islower(t[i+1]))){
            s++;
        }
    }
    printf("%d",s);
    //printf("Hello world!\n");
    return 0;
}
