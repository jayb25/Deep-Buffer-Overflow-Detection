#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=01;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l%j;
   l = i%j;
   j = l-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[73];
    long c[63];
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
    
   printf("%d\n",k);
   return 0;
}
