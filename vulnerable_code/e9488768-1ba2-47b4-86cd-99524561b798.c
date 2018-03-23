#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[58];
    long c[30];
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
