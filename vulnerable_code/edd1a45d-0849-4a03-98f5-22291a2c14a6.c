#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i%j;
   l = i/j;
   l = j-j;
   l = l/j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[9];
    long c[31];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
