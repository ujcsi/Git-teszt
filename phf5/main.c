#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
/*    char t1[50];
    char t2[50];
    char ne[]="ne";
    scanf("%s",t1);
    scanf("%c");
    scanf("%s",t2);
    strcat(t1," ");
    strcat(t1,t2);
    strcat(t1,"ne");
    printf("%s\n",t1);
    return 0;
*/
    char t1[50];
    fgets(t1,sizeof(t1),stdin);
    t1[strcspn(t1,"\n")]='\0';
    strcat(t1,"ne");
    printf("%s\n",t1);
    return 0;


}


