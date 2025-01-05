#include <stdio.h>
#include <stdlib.h>

/*int main()
{


    int x=0,o=0;
    printf("Kerek egy egesz szamot: \n");
    scanf("%d",&x);
    while (x>0)
    {
      o=o+(x%10);
      x=(x/10);
      }
    printf("%d",o);
    return 0;
}*/

/*int main()
{
    int i=0,j=0,o=0;
        for (i=1;i<=100;i++)
        {


            o=0;
            for (j=1;j<=i;j++)
                if (i%2==0)
                 {
                 if ((i/2)%j==0)
                    o++;
                 }
            if (o>2)
                printf("%d ",i);
        }
    return 0;
}*/
//#include <stdio.h>
int main()
{
    int i=0,j=0,o=0,f=0;
        for (i=1;i<=100;i++)
        {
            f=(i/2);
            o=0;
            for (j=1;j<=f;j++)

                 {
                 if (f%j==0)
                    o++;
                 }
            if (o>2)
                printf("%d ",i);
        }
    return 0;
}
