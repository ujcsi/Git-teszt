#include <stdio.h>
#include <stdlib.h>

int main()
{

int i,j;
char a;
    do
        {
            printf("Kerek egy pozitiv szamot: \n");
            scanf("%d",&i);
        }
    while (i<=0);
    printf("Kerek egy karaktert is: \n");
    scanf(" %c",&a);
   for (j=1;i>=j;j++)
            printf("%c",a);
    return 0;
}



//Program vége



/*    int i = 2;

        do
            {
                int j = 2, p = 1;
                if(j<i)
                    {

                        do{

                            if (i % j == 0 )
                                p = 0;
                            j++;
                            }
                        while( j<i && p ==1 );
                    }
                    if (p == 1) printf("%d ",i);

                        i++;
            }
        while(i<1000); */

