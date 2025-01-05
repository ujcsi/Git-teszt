#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand(time(NULL));
    float a,i;
    for (i=0;i<200;i++){
          a=(rand()%10)+((float)(rand()%100)/100);
        printf("%f\n",a);
    }





    //puts(t);
    //printf("Ezt ird ki");
    return 0;
}
