#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i%j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = l+(i-j);
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[93];
    long c[94];
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
