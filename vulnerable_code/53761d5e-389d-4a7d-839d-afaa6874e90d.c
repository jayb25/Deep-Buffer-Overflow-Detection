#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   l = 64;
   k = l/j;
   l = i/j;
   l = j/j;
   l = l-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[36];
    int c[89];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
