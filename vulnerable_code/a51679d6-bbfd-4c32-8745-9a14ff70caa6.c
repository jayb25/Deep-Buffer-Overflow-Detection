#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   k = i/j;
   l = j/j;
   l = l/j;
   l = j%j;
   l = l%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[12];
    long c[11];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
