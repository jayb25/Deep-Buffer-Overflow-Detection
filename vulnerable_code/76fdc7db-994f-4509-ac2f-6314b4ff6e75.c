#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=184;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i%j;
   l = l%i;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[74];
    long c[70];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
