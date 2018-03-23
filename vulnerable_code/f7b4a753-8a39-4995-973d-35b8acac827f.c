#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=184;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i-j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[94];
    long c[96];
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
