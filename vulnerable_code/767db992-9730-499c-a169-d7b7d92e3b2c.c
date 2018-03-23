#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   j = 63;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[23];
    long c[66];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
