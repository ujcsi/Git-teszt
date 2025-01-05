#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[6]={12,32,4,5,77,11};
    int i;
    int *p=t;
    for (i=1;i<6;i=i+2){
     printf("%d\n",t[i]);
    }
    printf("_____________\n");
    for (i=0;i<6;i++){
     printf("%d\n",p[i]);
    }
    printf("_____________\n");
    for(i=0;i<=2;i++){

        printf("%d\n",*(p+i*2+1));
      //printf("%d\n",p[i+1]);
    }
    return 0;
}
