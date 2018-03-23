#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = k/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = k+j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[17];
    int c[8];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,k);
   return 0;
}
