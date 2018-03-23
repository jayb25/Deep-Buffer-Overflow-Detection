#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i%j;
   l = i/j;
   l = l/j;
   l = i/j;
   k = j-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[9];
    long c[90];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
