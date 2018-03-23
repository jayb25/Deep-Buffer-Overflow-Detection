#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1223;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = i-j;
   l = i-j;
   l = k-4*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[69];
    long c[11];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
