#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Kerem az A szamot: ");
    scanf("%d",&a);
    printf("Kerem az B szamot: ");
    scanf("%d",&b);
    printf("Az A szam: %d\n",a);
    printf("A B  szam: %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Cserelve: \n");
    printf("Az A szam: %d\n",a);
    printf("A B  szam: %d",b);

    return 0;
}
