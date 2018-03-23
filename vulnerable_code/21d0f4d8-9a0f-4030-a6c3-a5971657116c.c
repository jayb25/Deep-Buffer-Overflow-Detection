#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   l = 53;
   l = 64;
   k = l/j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = k-j;
   l = i%j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[32];
    int c[39];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
