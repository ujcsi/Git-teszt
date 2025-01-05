#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    int b;

    for (b=10;b<=99;b++){
        //a=b+(0.1*((b/10)%10))+(0.01*(b%10));
        a=b+(0.1*(b%10))+0.01*((b/10)%10);
        printf("%.2f ",a);
    }

    //printf("Hello world!\n");
    return 0;
}
