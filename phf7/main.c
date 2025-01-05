#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    char t1[50];
    int x,i,a;
    scanf("%s",t);
    x=strlen(t);
    for (i=0;i<=x;i++){
        a=t[i];
       // printf("%c\n",a);
       // printf("%d\n",a);
        if (a>=65&&a<=90) {
         t[i]=a+32;
        }
    }
    printf("%s\n",t);
    scanf("%s",t1);
    x=strlen(t1);
    for (i=0;i<=x;i++){
        a=t1[i];
        if (a>=48&&a<=55){
         t1[i]=a+2;
        }
        if (a==56||a==57) {
         t1[i]=a-8;
        }
    }
    printf("%s\n",t1);

    return 0;
}
