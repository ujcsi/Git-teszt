//8. K´erj be 2 karaktert, majd ´ırasd ki az ´altaluk meghat´arozott z´art intervallumban l´ev˝o karaktereket. Figyelj arra, hogy [b; f] m´as eredm´enyt
//ad, mint az [f; b]!
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    int i;
    printf("Kerek ket karaktert\n");
    printf("Kerem az elso karaktert: ");
    scanf("%c",&a);
    printf("Kerem a masodik kraktert: ");
    scanf("%c",&b);
    printf("%d\t",a);
    printf("%d",b);

    if (a<b)
         for (i=a; i<=b; ++i)
           printf("%c",i);

    else

    {


        a=a+b;
        b=a-b;
        a=a-b;

          for (i=a; i<=b; ++i)
           printf("%c",i);

    }

return 0;
}
