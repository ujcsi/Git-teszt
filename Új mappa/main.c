#include <stdio.h>
#include <stdlib.h>

int main()
{
    int szam=42;
    int a;
    int* mutato=NULL;
    mutato=&szam;
    a=15;
    printf("%d\n",szam);

    printf("%p\n",(void*)&szam);

    printf("%d\n",szam);
    mutato=&a;
    printf("%d\n",*mutato);
    a=*mutato+1;
    printf("%d\n",*mutato);

    return 0;
}
