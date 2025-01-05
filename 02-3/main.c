#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,m,s;
    scanf("%d,%d",&a,&b);
    if (a>b) {
      printf("\n");
    }
    else {
       s=a;
       a=b;
       b=s;
    }

    //printf("%d,%d",a,b);

    while (m!=1) {
        m=(a%b);
        a=b;
        b=m;
        m=(a%b);
        //printf("%d",b);
    }
    printf("%d",b);

    return 0;
}








