/*3. �rj f�ggv�nyt, mely k�t char t�pus� param�tere alapj�n visszaadja,
hogy h�ny db. k�z�l�k a sz�mjegy! Pl. ha a k�t param�ter �t� �s �4�,
akkor egyet ad vissza.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int fgv(char x, char y){
    int db=0;
    if (isdigit(x)){
        db++;
    }
    if (isdigit(y)){
        db++;
    }
    return db;
}

int main()

{
    char a,b;
    int c;
    a='f';
    b='t';
    c=fgv(a,b);
    printf("%d",c);
    return 0;
}
