#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   i = 64;
   k = i/j;
   l = i%j;
   l = i-i;
   l = i/j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[85];
    long c[84];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
