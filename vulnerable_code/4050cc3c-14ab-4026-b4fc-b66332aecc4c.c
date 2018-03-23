#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i-j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   l = j/j;
   l = l%j;
   l = i+j;
   k = i-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[42];
    long c[71];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
