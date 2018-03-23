#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 530;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = j%j;
   l = k-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[45];
    long c[78];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
