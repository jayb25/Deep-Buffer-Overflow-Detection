#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[94];
    int c[44];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
