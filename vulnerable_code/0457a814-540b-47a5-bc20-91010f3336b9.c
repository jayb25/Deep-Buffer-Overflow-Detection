#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   j = 33;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = i/j;
   l = k/j;
   l = i-j;
   l = i%j;
   l = j-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[6];
    long c[7];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
