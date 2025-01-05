#include <stdio.h>
#include <string.h>

int main() {
    char t1[50];
    char t2[50];
    int a,b,i,j,ok,db;
    db=0;

    scanf("%s",t1);
    scanf("%s",t2);
    t1[strcspn(t1,"\n")]='\0';
    t2[strcspn(t2,"\n")]='\0';
    a=strlen(t1);
    b=strlen(t2);

    for(i=0;i<=(b-a);i++){
        ok=1;
        for(j=0;j<a;j++){
            if (t1[j]!=t2[i+j]){
                ok=0;
                break;
            }
        }
        if (ok) {
            db++;
        }
    }

    printf("%d\n",db);

    return 0;
}
