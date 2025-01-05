#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,min,minindex=0;

    int tomb[]={16, 23, 22, 19, 20, 21, 26, 20, 26, 28,
                  15, 23, 25, 19, 20, 20, 26, 20, 26, 18,
                  15, 22, 22, 19, 20, 17, 26, 18, 27, 13};
    min=tomb[0];
    for (i=0; (i<=30); i++)
    {


        if (tomb[i] < min)
            {
                min=tomb[i];
                minindex=i;
            }
    }
    printf("A legkisebb ertek: %d ",min);
    printf("A legkisebb elem sorszáma: %d",minindex);


    return 0;
}
