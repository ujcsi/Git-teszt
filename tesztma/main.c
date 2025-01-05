#include <stdio.h>
#include <stdlib.h>


int main() {
   char szoveg1[50];
   char szoveg2[50];
   int i;
   printf("kerem az elso szoveget: \n");
   gets(szoveg1);
   printf("kerem a masodik szoveget: \n");
   gets(szoveg2);
   int szamolotomb[255]={0};
   int szamolotomb2[255]={0};
   for (i=0;i<strlen(szoveg1);i++){   //megy 0 tól végig a szövegig
        szamolotomb[szoveg1[i]]++;
   }
   for (i=0;i<strlen(szoveg2);i++){
        szamolotomb2[szoveg2[i]]++;
   }
   for (i=0;i<255;i++){
       char output;
       if (szamolotomb2[i]>szamolotomb[i]){
            output=i;
            printf("A masodik sztringben tobb a %c betu\n",output);

       }
   }
return 0;
}
