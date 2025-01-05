//6. ´Irj programot, mellyel kider´ıthet˝o az int t´ıpus´u legnagyobb ´es legkisebb
//sz´am (t¨obbsz¨or lehet m´odos´ıtani ´es futtatni a k´odot).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Az int tipus legkisebb erteke: %d\n", INT_MIN);


    printf("Az int tipus legnagyobb erteke: %d\n", INT_MAX);



    int a,b,c,d;
    a=2147483647;
    b=2147483625;
    c=0;
    d=-2147483640;


    //printf("a=    %d\n",a);
    c=a+1;
    //printf("a+1= %d\n",a+1);
    //printf("a+2= %d\n",a+2);
    //printf("a-1=  %d\n",a-1);
    //printf("a-2=  %d\n",a-2);

    //if (a>c)
    //    printf("A a nagyobb\n");
    //else
    //    printf("C a nagyobb\n");


    do
    {
        //printf("%d\n",b);
        if (b>0);
            {
                b++;
                printf("%d\n",b);
            }


    }




     while (b>0);

     printf("\n");

    do
        if (d<0)
            {
                d--;
                printf("%d\n",d);
            }


    while (d<0);

    return 0;

}
