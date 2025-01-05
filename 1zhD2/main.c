#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=10000;i>=100;i--){
        if (i<1000){
            if ((i/100)<(i%10)){
                printf("%d " ,i);
            }
        }
        if (i>999){
            if ((i/1000)<(i%10)){
                printf("%d " ,i);
            }
        }



    }
    printf("Hello world!\n");
    return 0;
}
