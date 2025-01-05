#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[10]={1,2,3,1,2,3,2,2,2,2};
    int t2[10];
    int i,j,s,m,ind,cs,db,med;

    for (i=0;i<10;i++){
         s=0;
        for (j=i+1;j<10;j++){
            if (t[i]==t[j]){
                s++;

            }
        }
        t2[i]=s+1;
        printf("%d\n",s+1);
    }
    m=t2[0];
    for (i=0;i<10;i++){
        if (t2[i]>m){
            m=t2[i];
            ind=i;
        }
    }
    printf("A modusz: %d %d darab\n",t[ind],t2[ind]);

    for (i=0;i<10-1;i++){
        for (j=i+1;j<10;j++){
            if (t[i]>t[j]){
                cs=t[i];
                t[i]=t[j];
                t[j]=cs;
            }
        }
    }
    db=sizeof(t)/sizeof(t[0]);
    db=db/2;
    med=(t[db-1]+t[db+1])/2;
    printf("Median= %d",med);



//    printf("Hello world!\n");
    return 0;
}
