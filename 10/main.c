#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i=1;
    for (i=1; i<=1000; ++i)
    {
        if ((i%i)>=0)
        //if (((i%2)>0)&&((i%3)>0)&&((i%5)>0)&&((i%7)>0))
            printf("%d\n",i);
    }


    return 0;
}
