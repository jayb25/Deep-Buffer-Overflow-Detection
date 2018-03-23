#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=33;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j-j;
   l = i-j;
   l = l%j;
   l = l-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[90];
    long c[80];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
