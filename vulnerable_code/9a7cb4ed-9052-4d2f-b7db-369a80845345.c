#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 60;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-k;
   i = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[74];
    long c[31];
    a = 0;
    while (b[a] != 0) {
        //random
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
