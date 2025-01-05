#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[4][4]={{"avad"},{"zyac"},{"Tpoi"},{"mnbz"}};
    int a,i,j,s;
    char *p=&t[0][0];

    s=0;
    for (i=0;i<4;i++){
            for (j=0;j<4;j++){
                a=p[i*4+j]; //a=t[i][j];
            if ((a>=97)&&(a<=122)){
                s++;
              }
            }
    }

    printf("%d\n",s);
    return 0;
}
