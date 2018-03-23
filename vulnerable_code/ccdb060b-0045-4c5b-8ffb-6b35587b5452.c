#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   l = 33;
   l = 64;
   k = i/j;
   l = i/j;
   l = k-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[52];
    long c[23];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
