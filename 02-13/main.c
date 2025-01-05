#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10]={1,0,3,4,5,6,7,8,0,9};
    int k1,k2,i;
    int *p=t;
    if (t[0]<t[1]){
    k1=t[0];
    k2=t[1];
    }
    else {
     k1=t[1];
     k2=t[0];
    }
    for (i=2;i<10;i++){
        if (*(p+i)<k1) {
            k2=k1;
            k1=*(p+i);
        }
    else if (*(p+i)<k2){
        k2=*(p+i);
    }
    }
    printf("A két legkisebb elem: %d ,%d !\n",k1,k2);
    return 0;
}
