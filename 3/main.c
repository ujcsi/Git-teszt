//3. K´erj be egy sz´amot (min 16, max 31), ´ırasd ki a bin´aris ´atv´alt´asn´al
//kapott sorokat!

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a;
    printf("Kerek egy szamot min 16 es max 31 között: ");
    scanf("%d",&a);
    printf("A szam: ");
    printf("%d\n",a);
    if ((a>=16)&&(a<=31))
        {
         printf("%d|%d\n",a,a%2);
         printf("%2d|%d\n",a/2,a/2%2);
         printf("%2d|%d\n",a/4,a/4%2);
         printf("%2d|%d\n",a/8,a/8%2);
         printf("%2d|%d\n",a/16,a/16%2);
         printf("%d%d%d%d%d",a/16%2,a/8%2,a/4%2,a/2%2,a%2);
        }



    else
        printf("helytelen beiras");

    return 0;
}
