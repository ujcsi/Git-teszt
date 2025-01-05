#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    int i,x;
    scanf("%s",t);
    printf("%s\n",t);
    x=sizeof(t)/sizeof(t[0]);
    x=strlen(t);
    printf("%d\n",x);
    for (i=0;i<=x;i=i+2){
        printf(" %c ",t[i]);
    }



    //printf("%d",i);
    return 0;
}
