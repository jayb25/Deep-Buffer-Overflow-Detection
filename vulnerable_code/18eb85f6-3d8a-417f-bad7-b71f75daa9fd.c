#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = l%j;
   l = i%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[85];
    long c[8];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
