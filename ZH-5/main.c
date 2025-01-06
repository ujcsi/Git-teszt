#include <stdio.h>
#include <stdlib.h>

typedef struct tel {
                    int gombok_szama;
                    float tomeg;
}telefon;
int main()
{
    telefon telo1,telo2;
    scanf("%d,%f",&telo1.gombok_szama,&telo1.tomeg);
    scanf("%d,%f",&telo2.gombok_szama,&telo2.tomeg);
    if (telo1.gombok_szama<telo2.gombok_szama){
            printf("%f",telo1.tomeg);
    }
    if (telo2.gombok_szama<telo1.gombok_szama){
            printf("%f",telo2.tomeg);
    }
    return 0;
}
