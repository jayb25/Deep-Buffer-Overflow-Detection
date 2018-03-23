#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 534;
   l = 64;
   k = i-j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = l-i;
   l = l-j;
   j = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[25];
    int c[58];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
