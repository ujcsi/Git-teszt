/*1. Írasd ki 10000-tõl kezdve 10-ig azokat a számokat, melyek az
utolsó két jegyük által alkotott számmal oszthatók! Pl. 41, 302*/
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
