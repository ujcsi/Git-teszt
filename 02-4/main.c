#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int t[4];
    int i;
        for (i=0;i<4;i++) {
         scanf("%d",&t[i]);
        }
        for (i=0;i<4;i++) {
          printf("A tomb elemei: %d \n",t[i]);
        }
    return 0;
}*/
int main()
{
    char t[10];
    int i;
        for (i=0;i<10;i++) {
         scanf("%c",&t[i]);
         scanf("%c"); //ez nyeli be az Entert különben a tömbe eleme lenne az enter is
        }
        for (i=0;i<12;i++) {
          printf("A tomb elemei: %c \n",t[i]);
        }


return 0;
}
