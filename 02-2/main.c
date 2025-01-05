#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i,j,lnko;
    scanf("%d,%d",&a,&b);
    if (a>b) {
        c=b;
        }
    else {
        c=a;
        }
        for (i=c;i>=1;i--){
            if (((a%i)==0)&&((b%i)==0)) {
                printf("%d \n",i);
                lnko=i;
                break;
                }

            }


    if (a==b) {
        printf("%d\n",a);
        lnko=a;
    }
    printf("%d \n",((a*b)/lnko));

    return 0;
}

