#include <stdio.h>
#include <stdlib.h>


void ki(char a,int b){
    int i;
    for (i=1;i<=b;i++){
        printf("%c",a);
    }
}


int main()
{
    char r;
    int i;
    r=getchar();
    scanf("%d",&i);
    ki(r,i);
    return 0;
}
