#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1221;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[40];
    long c[68];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
