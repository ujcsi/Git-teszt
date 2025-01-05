#include <stdio.h>
#include <stdlib.h>

int ker (int x,int y) {
 return (x+y)*2;
}

int ter (int x, int y) {
 return x*y;
}

int main()
{



    int a,b;
    printf("Téglalap!\n");
    scanf("%d,%d",&a,&b);
    printf("A téglalap terülte: %d\n",ter(a,b));
    printf("A téglalap kerülete: %d \n",ker(a,b));


    return 0;
}
