#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 553;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   i = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[44];
    int c[85];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
