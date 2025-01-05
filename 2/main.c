//2. K´erd be egy t´eglalap oldalait, ´ırasd ki a ter¨ulet´et, ker¨ulet´et!
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b;
    printf("Kerem az a, b oldalt szóközökkel elválaszva: ");
    scanf("%d %d",&a,&b);
    printf("A teglalap kerulte: ");
    printf("%d \n",2*a+2*b);
    printf("A teglalap terulete: ");
    printf("%d",a*b);
    return 0;

}
