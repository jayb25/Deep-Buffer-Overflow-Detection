#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=32;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   i = l/j;
   l = k%j;
   l = k%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[94];
    int c[69];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
