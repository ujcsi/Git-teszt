#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[3][3]={{"020"}, //{'0','2','0'},
                  {"f2t"},
                  {"9z0"}};
    int i,j,s,a,c;
    c=0;
        for (i=0;i<3;i++){
            a=0;
            for (j=0;j<3;j++){
               s=t[j][i];
                if ((s>=48)&&(s<=57)) {
                    a++;
                }

                printf("%c \n",s);
                printf("%d \n",s);
            }
            if (a>=2){
                c++;
                }

        }

    printf("%d",c);
    return 0;
}
