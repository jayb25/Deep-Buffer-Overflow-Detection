#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 534;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[46];
    long c[55];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
