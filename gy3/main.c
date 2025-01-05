#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Kérek egy számot\n");
    do
    {
        scanf("%d",&a);
        if ((a<16)||(a>31))
        printf("Adjon meg egy másik számot:\n");
        //scanf("%d",&a);
    }
    while ((a<16)||(a>31));

    printf("%d|%d\n",a,a%2);
    printf("%2d|%d\n",a/2,a/2%2);
    printf("%2d|%d\n",a/4,a/4%2);
    printf("%2d|%d\n",a/8,a/8%2);
    printf("%2d|%d\n",a/16,a/16%2);
    printf("%d%d%d%d%d",a/16%2,a/8%2,a/4%2,a/2%2,a%2);

    return 0;
}
