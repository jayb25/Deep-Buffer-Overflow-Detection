#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1224;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = k-j;
   k = k-i*l;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[51];
    long c[20];
    a = 0;
    while (a > -1) {
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
