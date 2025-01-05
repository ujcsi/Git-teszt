#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=10;
    int *p=&i;
    *p=12;
    printf("%d",i);
    return 0;
}
