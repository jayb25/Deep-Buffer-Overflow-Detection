#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=111;
   int k;
   int l;
   k = 53;
   l = 64;
   i = i/j;
   l = i/j;
   l = i%j;
   l = l%j;
   k = l-4*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[97];
    int c[8];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
