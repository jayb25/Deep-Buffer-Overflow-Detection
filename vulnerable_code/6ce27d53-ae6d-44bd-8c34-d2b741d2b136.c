#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 33;
   k = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l%j;
   l = i-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[56];
    int c[77];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
