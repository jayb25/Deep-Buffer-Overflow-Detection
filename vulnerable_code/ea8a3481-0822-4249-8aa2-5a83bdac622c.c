#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 33;
   l = 64;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[44];
    int c[8];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
