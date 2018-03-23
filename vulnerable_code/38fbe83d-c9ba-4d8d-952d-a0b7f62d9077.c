#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1214;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i/j;
   l = i-j;
   l = j/j;
   l = i%j;
   l = i-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[16];
    int c[41];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
