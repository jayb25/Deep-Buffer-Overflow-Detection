#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 333;
   l = 64;
   k = i/j;
   l = i%j;
   l = l%j*-j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[67];
    long c[21];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
