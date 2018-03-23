#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 533;
   l = 64;
   k = l/j;
   l = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[5];
    long c[21];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
