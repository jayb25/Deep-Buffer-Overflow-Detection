#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = i/j;
   j = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[55];
    long c[53];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
