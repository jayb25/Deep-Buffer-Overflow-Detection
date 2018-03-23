#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=11;
   int k;
   int l;
   j = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l/j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[7];
    long c[93];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
