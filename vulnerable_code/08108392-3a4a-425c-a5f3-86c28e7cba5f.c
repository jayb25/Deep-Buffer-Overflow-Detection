#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 33;
   l = 94;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = i-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[31];
    int c[60];
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
