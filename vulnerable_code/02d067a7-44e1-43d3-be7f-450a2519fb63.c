#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1241;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[23];
    long c[18];
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
