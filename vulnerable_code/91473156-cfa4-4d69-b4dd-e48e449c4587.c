#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   j = 5;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = j-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[27];
    long c[72];
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
