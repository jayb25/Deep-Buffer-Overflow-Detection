#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=14;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[18];
    long c[40];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
