#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[4];
    int i,j,cs;
    scanf("%d,%d,%d,%d",&t[0],&t[1],&t[2],&t[3]);
    for (i=0;i<4;i++){
        printf("%d,",t[i]);
    }
    for (i=0;i<3;i++){
        for (j=i+1;j<4;j++){
            if (t[i]<t[j]){
                cs=t[i];
                t[i]=t[j];
                t[j]=cs;
            }
        }
    }

    printf("\n");
    for (i=0;i<4;i++){
        printf("%d,",t[i]);
    }
    printf("\n");
    printf("A harmadik szám: %d",t[2]);
    return 0;
}





