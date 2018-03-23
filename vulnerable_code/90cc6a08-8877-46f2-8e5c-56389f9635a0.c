#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=131;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l%j;
   l = i/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[40];
    long c[83];
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
