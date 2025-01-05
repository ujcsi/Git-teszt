#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,dc,m1,m2;
    printf("Add meg az együtthatókat!\n");
    printf("a= ");
    scanf("%lf",&a);
    printf("b= ");
    scanf("%lf",&b);
    printf("c= ");
    scanf("%lf",&c);
    dc=(b*b-4*a*c);
    if (dc>0) {
        m1=(-b+sqrt(dc))/(2*a);
        m2=(-b-sqrt(dc))/(2*a);
        printf("két valós gyök van: %1f ,%1f\n",m1,m2);
    }
    else if (dc==0) {
        m1=-b/(2*a);
        printf("Egy valós gyök van: %1f \n",m1);
    }
    else {
        printf("Nincs valós gyök!\n");

    }


    return 0;
}
