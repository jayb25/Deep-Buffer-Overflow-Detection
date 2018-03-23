#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=01;
   int k;
   int l;
   l = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[46];
    long c[93];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(a < strlen(b));
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
