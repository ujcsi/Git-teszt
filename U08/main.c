#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i,h;
    char t[50];
    puts("Kerek egy stringet:");
    gets(t);
    puts("Kerek egy egészet:");
    scanf("%d",&a);
    h=strlen(t);
    for (i=0;i<h;i++){
        if (i%a==0){
            printf("%c,",t[i+1]);
        }
    }




    //printf("Hello world!\n");
    return 0;
}
