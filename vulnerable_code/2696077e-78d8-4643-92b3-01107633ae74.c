#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = l%j;
   l = j+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[62];
    long c[58];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
