#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 553;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   i = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[14];
    long c[52];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
