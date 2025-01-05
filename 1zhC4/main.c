#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    char c;
    int i,s,h;
    puts("Kerek egy sztringet");
    gets(t);
    h=strlen(t);
    c=t[1];
    s=0;
    for (i=0;i<=h;i++){
        if (t[i]==c){
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
