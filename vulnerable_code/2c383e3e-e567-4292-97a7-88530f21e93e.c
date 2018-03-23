#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=424;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j+j;
   k = j-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[33];
    long c[91];
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
