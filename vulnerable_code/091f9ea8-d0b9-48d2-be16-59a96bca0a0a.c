#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l-j;
   l = j/j;
   l = l/j;
   l = j-j;
   l = i-j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = j%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[93];
    long c[90];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
