#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    int i,x,j,k;
    scanf("%s",t);
    printf("%s\n",t);
    x=sizeof(t)/sizeof(t[0]);
    x=strlen(t);
    printf("%d\n",x);
    for (i=0;i<=x;i++){
            for (j=0;j<i;j++){
                printf("%c",t[j]);
            }
            printf("\n");
    }

    return 0;
}
