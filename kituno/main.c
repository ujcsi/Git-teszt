#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[10]={5,5,5,5,5,5,5,5,5,4};
    int i=0;
    int x=0;

    for (i=0; i<(sizeof(tomb)/sizeof(tomb[0]));i++)
        if (tomb[i]!=5)
            x++;
    if (x!=0)
        printf("nem kituno");
    else
        printf("kituno");

    //printf("Hello world!\n");
    return 0;
}
