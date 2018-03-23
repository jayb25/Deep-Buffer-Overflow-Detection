#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1242;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = k-j;
   i = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[67];
    long c[90];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
