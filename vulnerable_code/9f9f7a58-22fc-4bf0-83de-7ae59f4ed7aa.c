#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 58;
   l = 64;
   k = i%j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   k = l-j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[34];
    long c[94];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
