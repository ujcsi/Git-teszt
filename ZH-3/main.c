#include <stdio.h>
#include <stdlib.h>

typedef struct adat
    {
    char k;
    char m[6];
    }adat;

adat fv (char a)
    {
    adat x;
    switch(a){
    case '0':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '1':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '2':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '3':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '4':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '5':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '6':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '7':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '8':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    case '9':
                x.k=a;
                strcpy(x.m,"igaz");
                return x;
                break;
    default:
        x.k=a;
                strcpy(x.m,"hamis");
                return x;
                break;

    }


    }

int main()





{



    char a;
    adat h;


    scanf("%c",&a);
    //printf("%c\n",a);
    h=fv(a);
    printf("%c\n",h.k);
    printf("%s\n",h.m);



    return 0;
}
