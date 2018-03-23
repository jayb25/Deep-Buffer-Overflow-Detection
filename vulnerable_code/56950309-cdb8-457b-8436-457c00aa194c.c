#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 63;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[43];
    int c[79];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
