#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = j/j;
   l = l-j;
   l = l%j;
   l = k+j*j;
   i = i%j;
   l = i-j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[9];
    long c[75];
    a = 0;
    while (a > -1) {
        //random
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
