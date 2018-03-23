#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=13;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = l%j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[8];
    long c[18];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
