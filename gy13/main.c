#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    a=a*a;
    b=b*b;
    c=c*c;
    if ((a-b-c)==0){
        printf("Derekszogu");
    }
    if ((b-a-c)==0){
        printf("Derekszogu");
    }
    if ((c-b-a)==0){
        printf("Derekszogu\n");
    }

    return 0;
}
