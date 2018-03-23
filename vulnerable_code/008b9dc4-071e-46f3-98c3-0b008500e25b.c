#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=182;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   k = k-k*j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[29];
    long c[39];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
