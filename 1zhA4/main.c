#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[50];
    char t1[50];
    int i,j,h,h1;
    puts("Kerem az elsõ szöveget");
    gets(t);
    puts("Kerem a masodik szöveget");
    gets(t1);
    h=strlen(t);
    h1=strlen(t1);
    for (i=0;i<=h;i++){
        for (j=0;j<=h1;j++){
            if (t[i]==t1[j]){
                printf("%c ",t[i]);
            }
        }
    }

 //   printf("Hello world!\n");
    return 0;
}
