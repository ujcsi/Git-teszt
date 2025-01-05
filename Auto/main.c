#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tomb[]={1000,400,60000,7000,80000};
    int i=0;
    int min=0,hely=0,masodik;
    min=tomb[0];
    for (i=0; i<5; i++)
    {
        if (tomb[i]<min)
        {
            min=tomb[i];
            hely=i;
        }
    masodik=min;
    }
    for (i=0; i<5; i++)
    {
        if (i!=hely)
        {
            (tomb[i]=masodik);
                if (tomb[i]< masodik)
                masodik=tomb[i];


//masodik=tomb[i];
        }
    }
    printf("%d\n",masodik);
    //printf("%d",hely+1);

    //printf("Hello world!\n");
    return 0;
}
