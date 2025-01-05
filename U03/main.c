#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10];
    int i,max=0,ind=0;
    for (i=0;i<10;i++){
        scanf("%d",&t[i]);
    }
    for (i=0;i<10;i++){
        if (t[i]%3==0){
                if (i<9){
                    printf("%d,",t[i+1]);
                    max=max+t[i+1];
                }
        }


    }

    printf("\n");
    printf("%d,",max);



    return 0;
}
