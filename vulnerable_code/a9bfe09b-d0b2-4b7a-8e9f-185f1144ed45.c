#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=10;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l-j;
   l = --j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[83];
    long c[18];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
