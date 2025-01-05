#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i,j,k;
    int a;
    for (i=0;i<100;i++){
           if (i<10){
            j=i+(i*i)/100;
           }
           if ((i>=10)&&(i<32)){
            j=i+(i*i)/1000;
           }
           if (i>=32){
            j=i+(i*i)/10000;
           }
           printf("%.2f  ",j);

    }





  /*  float a;
    int b;

    for (b=10;b<=99;b++){
        a=b+(0.1*((b/10)%10))+(0.01*(b%10));
        //a=b+(0.1*(b%10))+0.01*((b/10)%10);
        printf("%.2f ",a);
    }
        /*if (i<10){
            x=(int)i;
            x=x%10;
            j=x;
            if (i==(j+(j*j*0.1))){
                printf("%f ",i);
            }
        }*/
    //}
//    printf("Hello world!\n");
    return 0;
}
