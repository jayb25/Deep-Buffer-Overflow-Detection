#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12224;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[18];
    int c[51];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
