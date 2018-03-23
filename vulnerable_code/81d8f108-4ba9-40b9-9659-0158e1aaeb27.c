#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=131;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = 6%j;
   l = i--;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[77];
    int c[40];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
