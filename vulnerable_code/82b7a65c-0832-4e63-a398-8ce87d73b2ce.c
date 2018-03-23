#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 63;
   k = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = i%j;
   l = l%j;
   k = i-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[97];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
