/*1. �rasd ki 10000-t�l kezdve 10-ig azokat a sz�mokat, melyek az
utols� k�t jegy�k �ltal alkotott sz�mmal oszthat�k! Pl. 41, 302*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,utolso;
    for (i=10000;i>=10;i--){
        utolso=i%100;
        if (utolso!=0){
            if (i%utolso==0){
                printf("%d ",i);
            }
        }
    }
    return 0;
}
