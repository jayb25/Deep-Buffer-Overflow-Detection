#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1214;
   int k;
   int l;
   k = 5;
   j = 64;
   k = i/j;
   l = i/j;
   l = i+j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[49];
    int c[36];
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
