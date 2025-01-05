#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,a;
    s=0;
    scanf("%d",&a);
    while (a>0){
        s=(s+(a%10));
        a=a/10;
    }

    printf("%d",s);
    return 0;
}
