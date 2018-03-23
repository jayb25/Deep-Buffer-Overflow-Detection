#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i-j;
   i = j%j;
   l = l%j;
   l = k+j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[68];
    long c[28];
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
