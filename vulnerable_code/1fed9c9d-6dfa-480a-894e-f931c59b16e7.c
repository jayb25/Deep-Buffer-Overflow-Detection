#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=15;
   int k;
   int l;
   k = 63;
   l = 64;
   k = i/j;
   l = j/j;
   l = l%j;
   l = k-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[93];
    long c[20];
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
