//7. K´erd be a saj´at ´es a f˝on¨ok¨od fizet´es´et, majd 3 operandus´u oper´atort
//haszn´alva ´ırasd ki a v´elem´enyed!

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Kérem a saját fizetést: ");
    scanf("%d",&a);
    printf("Kérem a főnök fizetését: ");
    scanf("%d",&b);

    printf("%s",(a>=b)? "jol keresek":"nem jol keresek");

    return 0;


}
