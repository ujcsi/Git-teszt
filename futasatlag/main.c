#include <stdio.h>
#include <stdlib.h>
int main()
{
    int futas[10]={8,5,3,9,4,1,5,1,12,5};
    int osszes=0;
    int meret;
    int valami;
    int i;
    for (i=0; i<=9; i++)
        {
        osszes=osszes+futas[i];
        }
    printf("Az osszes futas: %d km \n",osszes);
    meret=sizeof(futas);
    valami=sizeof(futas[5]);
    printf("a merete: %d\n",meret);
    printf("valami: %d\n",valami);
    return 0;
}
