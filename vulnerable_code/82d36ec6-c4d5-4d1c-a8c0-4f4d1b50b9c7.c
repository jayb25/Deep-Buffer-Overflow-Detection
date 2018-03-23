#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   l = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l%j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[18];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
