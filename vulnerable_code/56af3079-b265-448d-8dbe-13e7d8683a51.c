#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=18;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i%j;
   l = i%j;
   l = l%j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[15];
    long c[82];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
