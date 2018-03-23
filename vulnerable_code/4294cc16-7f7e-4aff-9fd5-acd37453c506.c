#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   l = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[21];
    int c[83];
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
