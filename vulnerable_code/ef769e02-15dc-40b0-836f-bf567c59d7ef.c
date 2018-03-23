#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=184;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   i = i/j;
   l = j/j;
   l = l%j;
   l = l+j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[45];
    long c[28];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
