/*3. Írj függvényt, mely két char típusú paramétere alapján visszaadja,
hogy hány db. közülük a számjegy! Pl. ha a két paraméter ’t’ és ’4’,
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
