#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l/j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[93];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
