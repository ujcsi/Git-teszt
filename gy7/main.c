#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Kérek egy számot: ");
    scanf("%d",&a);
    //scanf(&b);
    printf("Kérek egy másik számot: ");
    scanf("%d",&b);
    printf("%s",(a>b)?"A a nagyobb":"B a nagyobb");
    return 0;
}
