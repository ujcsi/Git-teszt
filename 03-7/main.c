#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s;
    s=0;
    scanf("%d",&a);
    for (i=a;i>=1;i--){
        if (a%i==0){
            s++;
        }
    }
    printf("%d",s);
    return 0;
}
