#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=14;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l-j;
   j = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[39];
    int c[86];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
