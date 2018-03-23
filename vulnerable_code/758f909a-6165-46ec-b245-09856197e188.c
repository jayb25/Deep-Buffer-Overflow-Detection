#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=122;
   int k;
   int l;
   j = 13;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[91];
    int c[98];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
