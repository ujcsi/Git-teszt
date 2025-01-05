#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n,i;
    scanf("%d",&a);
        for (i=1;i<a;i++) {
            n=i*i;
            if (n>a) {
                printf("%d ",n);
            break;
            }
        }
    return 0;
}
