#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main() {
    char t[100];
    int i,j,db;
    char temp;
    printf("Kérlek, adj meg egy szöveget: ");
    gets(t);
    db=strlen(t);

    for (i = 0; i < db - 1; i++) {
        for (j = i + 1; j < db; j++) {
            if (t[i] > t[j]) {
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
    for (i=0;i<db;i++){
        printf("%c",t[i]);

    }


    return 0;
}
