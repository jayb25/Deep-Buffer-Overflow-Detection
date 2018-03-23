#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=3224;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   j = i-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[97];
    long c[47];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
