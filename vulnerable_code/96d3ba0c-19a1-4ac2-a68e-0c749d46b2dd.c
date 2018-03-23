#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   j = i%j;
   l = l/j;
   l = j%j;
   l = l%j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[26];
    long c[28];
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
