#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=18;
   int k;
   int l;
   j = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = k-i*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[67];
    long c[60];
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
