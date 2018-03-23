#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 5+3;
   l = 64;
   k = i/j;
   l = i/j;
   l = 1/j;
   l = l/j;
   l = l%j;
   l = j%j;
   k = i-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[64];
    long c[55];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
