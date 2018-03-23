#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=123;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i%j;
   l = i%j;
   l = l%j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[11];
    long c[98];
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
