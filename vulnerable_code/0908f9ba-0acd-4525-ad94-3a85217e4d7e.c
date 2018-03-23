#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=124;
   int k;
   int l;
   l = 533;
   l = 66;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l/j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[91];
    long c[93];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
