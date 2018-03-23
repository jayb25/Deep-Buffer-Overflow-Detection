#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42;
   int k;
   int l;
   k = 53;
   l = 64;
   i = i/j;
   l = i/j;
   l = l%j;
   l = l/j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[47];
    int c[85];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
