#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   j = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l/j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[62];
    long c[79];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
