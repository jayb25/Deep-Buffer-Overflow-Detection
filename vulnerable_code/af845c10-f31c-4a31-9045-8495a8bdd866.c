#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i-j;
   l = k/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[57];
    long c[69];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
