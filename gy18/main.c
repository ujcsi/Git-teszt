#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
     if((a==b)&&(b==c)) {
        printf("Három egyforma van köztük \n");
     }
     else if ((a==b)||(b==c)||(a==c)) {
        printf("két egyforma van köztük \n");
     }
     else {
        printf("Nincs köztük egyforma \n");

     }
    return 0;
}
