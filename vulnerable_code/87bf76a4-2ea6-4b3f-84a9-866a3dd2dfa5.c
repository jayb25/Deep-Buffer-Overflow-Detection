#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 5;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   k = 6-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[5];
    long c[91];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
