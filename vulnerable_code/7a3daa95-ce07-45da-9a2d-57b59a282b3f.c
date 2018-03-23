#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=32;
   int k;
   int l;
   j = 538;
   l = 644;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = k/j;
   j = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[35];
    int c[57];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
