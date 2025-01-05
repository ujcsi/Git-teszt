#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[3][3]={{2,2,3},{1,2,3},{12,14,3}};
    int i,j,s;
        s=1;
        for (i=0;i<3;i++){
            s=s*(t[i][i]);
        }
        printf("%d\n",s);
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
            if ((t[i][j])<s) {
                printf("%d\n",t[i][j]);
            }
            }
        }
    return 0;
}
