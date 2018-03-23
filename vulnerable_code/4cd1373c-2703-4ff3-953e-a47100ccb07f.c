#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=142;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l-j;
   l = i-j;
   j = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[69];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
