#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10];
    int i,max=0,ind=0;
    for (i=0;i<10;i++){
        scanf("%d",&t[i]);
    }
    max=t[0];
    for (i=0;i<10;i++){
        if (t[i]>max) {
            max=t[i];
        }
    }
    for (i=0;i<10;i++){
            if (t[i]==max){
                //printf("A max elem sorszáma: %d\n",i+1);
                printf("%d,",i+1);
            }
    }



    printf("Hello world!\n");
    return 0;
}
