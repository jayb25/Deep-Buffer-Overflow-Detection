#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/l;
   l = i/j;
   l = j-j;
   l = i%j;
   l = i/j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[84];
    long c[75];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
