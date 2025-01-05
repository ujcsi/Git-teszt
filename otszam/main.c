#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i=0;
    for (i=1;i<=100;i++)
      printf("%d ",i);
    //printf(a,b,c,d,e);
    //printf("Hello world!%d,%d,%d,%d,%d\n",a,b,c,d,e);
    return 0;
}*/
/*int main()
{
    int i=0;
    for (i=200; i>=100;i--)
        printf("%d ",i);
    return 0;
}*/
/*int main()
{
        int i,a,b,c=0;
        for (i=999; i>=600;i--)
        {
            if ((i)%3==0)
                printf("%d ",i);
            //a=i/100;
            //b=i%100/10;
            //c=i%10;
            //if ((a+b+c)%3==0)
            //    printf("%d ",i);
        }


        return 0;
}*/
/*int main()
{
    int i=0;
    for (i=1;i<=10000;i++)
        if ((i%3==0)&&(i%7==0))
            printf("%d ",i);

        return 0;
}*/
/*int main()
{


    int i=0;
    for (i=1;i<=10000;i++)
        if ((i%100==77)&&i!=77)
            printf("%d ",i);
        return 0;
}*/
/*int main()
{
    int i=0,a;
    printf("kerek egy szamot: ");
    scanf("%d",&a);
    for (i=1;i<=(a);i++)
         if (a%i==0)
            printf("%d ",i);
    return 0;
}*/
/*
int main()
{
    int i=0,a,o=0;
    printf("kerek egy szamot: ");
    scanf("%d",&a);
        for (i=1;i<=a;i++)
            if (a%i==0)
            {
                o++;
                printf("%d ",i);
            }


      printf("\n%d",o);

    return 0;
}*/
/*int main()
{
    int i=0,a,o=0;
    printf("Kerek egy szamot: ");
    scanf("%d",&a);
        for (i=1;i<=a;i++)
            if (a%i==0)
                o=(o+i);
        printf("%d ",o);
    return 0;
}*/
/*int main()
{
    int i=0,a,b,c,d,o=0;
    printf("Kerek egy számot: ");
    scanf("%d",&i);
    while (i!=0)
        {
            o=o+(i%10);
            i=i/10;
        }

    printf("\n%d",o);

    //if ((i>0)&&(i<10000))
    //{
    //    a=i/1000;
    //    b=(i%1000)/100;
    //    c=(i%100)/10;
    //    d=(i%10);
    //}
    //printf("\n%d",a+b+c+d);
    return 0;
}*/
int main()
{
        int i=0,j=0,o=0;
        for (i=1;i<=100;i++)
        {
            o=0;
            for (j=1;j<=i;j++)
            {

                //printf("%d , %d\n",i,j);
             if (i%j==0)
                {
                 o++;
                 //printf("%d oszto\n",o);

                }
            }
                if (o==2)
                {
                    printf("%d ",i);
                    o=0;
                }



        }







    return 0;
}

