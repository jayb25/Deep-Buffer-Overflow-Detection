#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 63;
   k = i/j;
   l = l/j;
   l = j/j;
   l = l%j;
   l = k+j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[89];
    int c[74];
    a = 0;
    do {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
