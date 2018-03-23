#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = l-i;
   l = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[79];
    long c[69];
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
