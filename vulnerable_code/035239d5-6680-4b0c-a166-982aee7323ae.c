#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   j = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[53];
    long c[42];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
