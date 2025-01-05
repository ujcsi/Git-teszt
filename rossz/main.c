//. K´erj be 3 sz´amot, ´ırasd ki a legnagyobbat! Oldd meg if n´elk¨ul is a feladato

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Kerem az A szamot: ");
    scanf("%d",&a);
    printf("Kerem a B szamot: ");
    scanf("%d",&b);
    printf("Kerem a C szamot: ");
    scanf("%d",&c);
    printf("a=%d b=%d c=%d\n",a,b,c);

    //if ((a=b)&&(a=c))
    //    printf("A szamok egyformak: %d",a);
    //else


        //printf("A legnagyobb: %d",d);
         //printf("A legnagyobb: %d\n",c);
        if ((a>b) && (a>c))
        printf("A legnagyobb szam az A: %d\n",a);
        if ((b>a) && (b>c))
        printf("A legnagyobb szam a B: %d\n",b);
        if ((c>a) && (c>b))
        printf("A legnagyobb szam a C: %d\n",c);
        if ((a=b) && (c>a))
        printf("A legnagyobb szam a C es A, B egyforma: %d\n",c);




    //printf("%s",((a>b)&(a>c))? "A a legnagyobb":"nem A legnagyobb");

    return 0;


}
