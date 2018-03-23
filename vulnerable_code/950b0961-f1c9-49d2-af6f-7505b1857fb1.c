#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=18;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/4;
   l = i/j;
   l = l%j;
   l = j%j;
   l = l%j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[88];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
