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
    for (i=0;i<=(x-1);i++){
            for (k=x-i-2;k>=0;k--){
                    printf(" ");
                }
            for (j=i;j>=0;j--){

                printf("%c",t[j]);
            }
            printf("\n");
    }
    for (i=0;i<=(x-1);i++){
        printf("%c",t[i]);
    }
    for (i=x;i>=0;i--){
        printf("%c",t[i]);
    }

    //printf("%d",i);
    return 0;
}
