#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10]={0,3,4,5,1,1,9,13,55,-1};
    int i,s,n,k;
        s=0;
        n=t[0];
        k=t[0];
        for (i=0;i<10;i++){
           s=s+t[i];

           if (n<t[i]){
                n=t[i];
           }
           if (k>t[i]){
                k=t[i];
           }
        }
    printf("Osszege: %d\n",s);
    printf("Legnagyobb: %d\n",n);
    printf("Legkisebb: %d\n",k);
    return 0;
}
