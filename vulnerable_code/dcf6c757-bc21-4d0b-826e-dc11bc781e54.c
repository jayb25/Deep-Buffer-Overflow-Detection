#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=02;
   int k;
   int l;
   k = 33;
   l = 640;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l%j;
   j = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[5];
    long c[57];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
