#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[63];
    int c[96];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",k);
   return 0;
}
