#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1222;
   int k;
   int l;
   k = 5;
   l = 6;
   k = i%j;
   l = i/j;
   l = j-j;
   l = j%j;
   l = l-j;
   j = k-i*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[91];
    long c[34];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
