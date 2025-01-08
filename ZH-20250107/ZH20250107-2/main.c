#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[10][10];
    int i,j,sz;
    sz=0;
        for (i=0;i<10;i++){
            for (j=0;j<10;j++){
                scanf(" %c",&t[i][j]);
            }
        }
        printf("\n");
        for (i=0;i<10;i++){
            for (j=0;j<10;j++){
                printf("%c",t[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i=0;i<10;i++){
            for (j=0;j<9;j++){
                if ((t[i][j]=='x')&&(t[i][j+1]=='y')){
                        printf("%c,%c   ",(t[i][j]),(t[i][j+1]));
                        printf("%d,%d %d,%d ",i,j,i,j+1);
                        sz++;

                }
            }
            printf("\n");
        }
    printf("\n");
    printf("%d",sz);
 //   printf("Hello world!\n");
    return 0;
}
