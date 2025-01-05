#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d-20000ft\n",a/20000);
    a=a-((a/20000)*20000);
    printf("%d\n",a);
    printf("%d-10000ft\n",(a%20000)/10000);
    a=a-((a/10000)*10000);
    printf("%d\n",a);
    printf("%d-5000ft\n",(a%10000)/5000);
    a=a-((a/5000)*5000);
    printf("%d\n",a);
    printf("%d-2000ft\n",(a%5000)/2000);
    a=a-((a/2000)*2000);
    printf("%d\n",a);
    printf("%d-1000ft\n",(a%2000)/1000);
    a=a-((a/1000)*1000);
    printf("%d-500Ft\n",(a%1000)/500);
    a=a-((a/500)*500);
    printf("%d-200Ft\n",(a%500)/200);
    a=a-((a/200)*200);
    printf("%d-100Ft\n",a%200/100);
    a=a-((a/100)*100);
    printf("%d-50Ft\n",a%100/50);
    a=a-((a/50)*50);
    printf("%d-20Ft\n",a%50/20);
    a=a-((a/20)*20);
    printf("%d-10Ft\n",a%20/10);
    a=a-((a/10)*10);
    printf("%d-5Ft\n",a%10/5);
    a=a-((a/5)*5);
    printf("%d-2Ft\n",a%5/2);
    printf("%d-1Ft\n",a%2/1);

    return 0;
}
