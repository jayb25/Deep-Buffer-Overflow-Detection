#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1442;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-k*i;
   k = i%j;
   l = j-j;
   l = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[63];
    long c[27];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
