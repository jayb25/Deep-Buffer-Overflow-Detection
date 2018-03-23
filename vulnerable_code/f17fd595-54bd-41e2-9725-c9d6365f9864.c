#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = l-j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[17];
    int c[97];
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
