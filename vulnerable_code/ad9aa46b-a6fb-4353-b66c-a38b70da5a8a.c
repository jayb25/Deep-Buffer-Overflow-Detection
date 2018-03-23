#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i-j;
   i = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = l-j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[67];
    int c[24];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
