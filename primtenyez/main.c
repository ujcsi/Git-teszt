#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int a=0,f,g,h,j,i;
    scanf("%d",&a);

      printf("%2d|%d\n",a,a%2);
      f=a%2;
      a=a/2;
      printf("%2d|%d\n",a,a%2);
      g=a%2;
      a=a/2;
      printf("%2d|%d\n",a,a%2);
      h=a%2;
      a=a/2;
      printf("%2d|%d\n",a,a%2);
      i=a%2;
      a=a/2;
      printf("%2d|%d\n",a,a%2);
      j=a%2;
      printf("\n%d%d%d%d%d",j,i,h,g,f);
      //a=a/2;
    return 0;
}*/
/*int main()
{
    int a=0;
    scanf("%d",&a);


      printf("%d%d%d%d%d",a/16%2,a/8%2,a/4%2,a/2%2,a%2);

    return 0;
}*/
/*int main()
//primszámok amik számjegyeinek összege 8
{
    int i=0,j=0,o=0,k,s=0;
    for (i=1;i<=1000;i++)
        {
        o=0;
        for(j=1;j<=i;j++)
            {
              if (i%j==0)
                o++;
                break;

            }
         if (o==2)

            {
            s=0;
            //printf("%d ",i);
            k=i;
              while(k!=0)
               {

                 s=s+(k%10);
                 k=k/10;
               }
             if (s==8)
                printf("%d-%d\n",i,s);
            }

        }
    return 0;
}*/
/*int main()
//bovelkedo szamok
{
    int i,j,o;
    for (i=1;i<=100;i++)
        {
        o=0;
        for (j=1;j<=i-1;j++)
            {
            if (i%j==0)
             o=o+j;
            }
    if (o>i)
    printf("%d\n",i);
        }
return 0;
}*/
/*int main()
//páratlan számú osztók
{
 int i,j,o;
    for (i=1;i<=100;i++)
        {
        o=0;
        for (j=1;j<=i;j++)
            {
            if (i%j==0)
                o++;
            }
        if (o%2==1)
        printf("%d-%d\n",i,o);
        }
return 0;
}*/
int main()
{
    int i=0,e,m,k;
    for (i=100;i<=9999;i++)
    {
        if (i<=999)
            {
            e=(i/10);
            m=(i%100);
            }
            //if (e==2*m)
            //    printf("%d %d %d\n",i,e,m);


        else
            {
            e=(i/100);
            m=(i%100);
            }
        //if (e==2*m) //ez lenne a jó megoldás
        //if ((e/2)==m)
        if ((e/m)%2==0)
            printf("%d %d %d\n",i,e,m);

            }

return 0;
}





            //  if ((e/m)%2==0)
            //    printf("%d-%d--%d\n",i,e,m);

            //if (i>999)
            //{
            //  e=(i/100);
            //  m=(i%100);
            //  printf("%d.%d.%d\n",i,e,m);
             // if ((e/m)%2==0)
            //     printf("%d.%d.%d\n",i,e,m);
            //}
            //k=(e/m);
            //if (k==2)
            //    printf("%d,%d,%d\n",i,e,m);








                //printf("%d",i);








