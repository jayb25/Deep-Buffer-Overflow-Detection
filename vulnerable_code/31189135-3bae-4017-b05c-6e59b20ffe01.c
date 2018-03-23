#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 533;
   k = 64;
   k = i/j;
   l = i/j;
   l = 6%j;
   l = i%j;
   j = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[86];
    long c[19];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
