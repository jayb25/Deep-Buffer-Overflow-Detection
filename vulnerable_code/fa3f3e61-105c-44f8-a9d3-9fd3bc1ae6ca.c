#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[96];
    long c[62];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
