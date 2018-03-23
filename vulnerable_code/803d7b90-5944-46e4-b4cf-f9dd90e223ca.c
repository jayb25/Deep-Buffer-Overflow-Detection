#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=122;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[92];
    long c[53];
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
