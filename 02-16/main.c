#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char t[50]={"gezakekazeg"};
    int n,i,h,p;
    n=sizeof(t)/sizeof(t[0]);

    p=1;
    scanf("%s",t);
    //t[strcspn(t, "\n")]='\0';
    printf("%s\n",t);
    h=strlen(t);
    for (i=0;i<h/2;i++) {
        if (t[i]!=t[h-1-i]){
            p=0;
        }
    }
    if (p) {
        printf("palindrom");
    }
    else {
        printf("nem az");

    }
    return 0;
}
