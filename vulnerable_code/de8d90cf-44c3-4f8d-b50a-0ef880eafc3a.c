#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i%j;
   k = l%j;
   l = l%j;
   l = 6-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[9];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
