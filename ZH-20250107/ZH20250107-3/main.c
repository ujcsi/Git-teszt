#include <stdio.h>
#include <stdlib.h>

int fg (int x,int y){
    int max,i;
    if (x>y){
        max=x;
    }
    if (y>x){
        max=y;
    }
    for (i=1;i<=max;i++){
        if (((x%i)!=0)&&((y%i)!=0)){
            return i;
        }
    }
}

int main()
{




    int elso=60;
    int masodik=20;
    int c;
    c=fg(elso,masodik);
    printf("%d ",c);
    return 0;
}
