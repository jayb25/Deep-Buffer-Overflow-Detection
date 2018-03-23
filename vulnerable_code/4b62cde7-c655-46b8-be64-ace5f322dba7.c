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
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[41];
    long c[31];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",i);
   return 0;
}
