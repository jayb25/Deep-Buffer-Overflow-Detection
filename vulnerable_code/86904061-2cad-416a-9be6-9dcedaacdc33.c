#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=184;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i%j;
   l = l%i;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[87];
    int c[8];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
