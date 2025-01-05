#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10]={1,2,3,4,5,6,7,8,9,3};
    int i,s,*p=t;
        s=0;
        p=t;
        for (i=0;i<=8;i++){
            if (t[9]<*p+i){ //if (t[9]<t[i]){
                s++;
            }
        }
    printf("%d\n",s);
    return 0;
}
