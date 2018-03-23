#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   l = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = l-j;
   k = k--*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[24];
    long c[34];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
