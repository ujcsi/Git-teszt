#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,van=0;

    char tomb[5]={"a!d!!"};
    int hely[5]={0,0,0,0,0};
        for (i=0; i<5; i++)
        {
            if (tomb[i]=='!')
                {
                 van=1;
                 hely[j]=i+1;
                 j++;

                 }
                }
    for (j=0; j<5;j++)
        printf("%d ",hely[j]);
    printf("\n");

    if (van)
        printf("%d",hely[1]);



    //printf("Hello world!\n");
    return 0;
}
