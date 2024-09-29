#include <stdio.h>
#include "error.h"

int main (void) {
   int i = 32;

   printf("Within the outer block: i=%d\n", i);

   {
     int j;

     printf("Within the inner block:\n");
     for (i=0, j=3; i<=3; i++, j--)
         printf("i=%d, j=%d\n", i, j);
   }
   printf("Within the outer block:  i=%d\n", i);
   return 0;
}
