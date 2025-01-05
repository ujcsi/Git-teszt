#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x,y,z;

   printf("x= ");
   scanf("%d",&x);

   printf("y= ");
   scanf("%d",&y);

   printf("z= ");

   scanf("%d",&z);

   int legnagyobb;

  if( (x>=y) && (x>=z) )
             legnagyobb = x;


  if( (y>=x) && (y>=z)  )
             legnagyobb = y;


  if ( (z>=x && z>=y))
              legnagyobb = z;

         printf("A legnagyobb szam:%d", legnagyobb);
}
