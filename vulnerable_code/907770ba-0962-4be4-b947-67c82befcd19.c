#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = i/j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[40];
    int c[90];
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
