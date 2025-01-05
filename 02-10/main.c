#include <stdio.h>
#include <stdlib.h>

int main()

{
    char t[10]="amafftfmfl";
    int i,a,l,m;
    a=0;l=0;m=0;
    for (i=0;i<10;i++){
        if (t[i]=='a'){
            a++;
        }
        if (t[i]=='l'){
            l++;
        }
        if (t[i]=='m'){
            m++;
        }
    }
    if ((a>1)&&(l>=1)&&(m>=1)){
        printf("Megvan benne\n");
    }
    else {
        printf("Nincs meg benne\n");
    }
    printf("a-%d\n",a);
    printf("l-%d\n",l);
    printf("m-%d\n",m);

    //printf("Hello world!\n");
    return 0;
}
