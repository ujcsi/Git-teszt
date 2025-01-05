#include <stdio.h>
#include <stdlib.h>

void dupla(int *x){
       *x=*x*2;
}

int main()
{
    int a;

    scanf("%d",&a);
    dupla(&a);
    printf("\n");
    printf("%d",a);
    return 0;
}
