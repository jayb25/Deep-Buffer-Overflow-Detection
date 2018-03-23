#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1241;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[7];
    long c[64];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
