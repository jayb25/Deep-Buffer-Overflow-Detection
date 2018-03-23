#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   k = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = k-4*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[39];
    int c[82];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
