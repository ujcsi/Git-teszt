#include <stdio.h>
#include <stdlib.h>

int fgv(int x, int y){
    int tx[10]={0,0,0,0,0,0,0,0,0,0};
    int ty[10]={0,0,0,0,0,0,0,0,0,0};
    int sz1,sz2,m,i,max;
    max=-1;
    sz1=x;
    while (sz1>0){
        m=sz1%10;
        tx[m]++;
        sz1=sz1/10;
    }
    sz2=y;
    while (sz2>0){
        m=sz2%10;
        ty[m]++;
        sz2=sz2/10;
    }
    for (i=0;i<10;i++){
        if ((tx[i]>0)&&(ty[i]>0)){
            max=i;
        }
    }
    for (i=0;i<10;i++){
            printf("%d,%d\n",tx[i],ty[i]);
    }
    return max;




}
int main()
{
    int a=2229;
    int b=1005;
    int c;
    c=fgv(a,b);
    printf("%d",c);
    return 0;
}
