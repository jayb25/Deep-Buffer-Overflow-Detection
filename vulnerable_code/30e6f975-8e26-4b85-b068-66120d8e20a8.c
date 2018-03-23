#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 553;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k-k*j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[57];
    long c[68];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
