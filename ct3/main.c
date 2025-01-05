#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[20];
    char t1[20];
    int h,h1,i,j;
    gets(t);
    gets(t1);
    h=strlen(t);
    h1=strlen(t1);
    for (i=0;i<h;i++){
        for (j=0;j<h1;j++){
            if (t[i]==t1[j]){
                printf("%c,",t[i]);
            }
        }
    }
    printf("Hello world!\n");
    return 0;
}
