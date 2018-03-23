#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=01;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = j/j;
   l = l/j;
   l = l/j;
   l = k/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[84];
    long c[44];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
