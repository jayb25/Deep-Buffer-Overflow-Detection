#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=01;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[61];
    long c[14];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
