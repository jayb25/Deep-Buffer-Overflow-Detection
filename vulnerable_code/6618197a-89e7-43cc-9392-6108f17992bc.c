#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 538;
   l = 644;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k/j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[48];
    long c[88];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
