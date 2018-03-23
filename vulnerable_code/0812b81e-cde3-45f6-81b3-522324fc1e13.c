#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=3221;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = k/j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[6];
    int c[62];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
