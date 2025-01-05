#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,s;
    s=0;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        if (a%i==0){
            s=s+i;
        }
    }
    printf("%d",s);
    return 0;
}
