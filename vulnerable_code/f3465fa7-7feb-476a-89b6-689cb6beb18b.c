#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = l%j;
   l = i+j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[67];
    long c[18];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
