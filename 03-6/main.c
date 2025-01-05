#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    for (i=a;i>=1;i--){
        if (a%i==0) {
            printf(" %d ",i);
        }
    }
    return 0;
}
