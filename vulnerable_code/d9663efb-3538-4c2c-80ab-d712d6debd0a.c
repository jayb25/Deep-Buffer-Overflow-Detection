#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=10;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l%j;
   l = l/j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[33];
    int c[65];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
