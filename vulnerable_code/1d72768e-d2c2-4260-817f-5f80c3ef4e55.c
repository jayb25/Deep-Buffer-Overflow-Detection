#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 3;
   l = 64;
   k = i/j;
   k = i/j;
   l = l/j;
   l = l-j;
   l = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[94];
    long c[48];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
