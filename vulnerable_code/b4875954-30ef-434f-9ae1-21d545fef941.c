#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=52;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l%j;
   l = l-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[26];
    int c[38];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
