#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[100];
    int i,j;

    for (i=0;i<100;i++){
          t[i]='n';
    }
 //   printf("%c",t[50]);
    for (i=2;i<=100;i++){
          for (j=i;j<=100;j=j+i) {
              if (t[j]=='z') {
                t[j]='n';
              }
              else {
                t[j]='z';
              }

          }
        }
        for (i=1;i<=100;i++){
    printf(" %c ",t[i]);
        }


    return 0;
}



