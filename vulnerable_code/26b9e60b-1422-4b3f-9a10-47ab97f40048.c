#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[5];
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
    
   printf("%d\n",l);
   return 0;
}
