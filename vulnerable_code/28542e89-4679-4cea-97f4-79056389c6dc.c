#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=10;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   j = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[47];
    long c[90];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
