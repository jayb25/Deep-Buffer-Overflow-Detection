#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = k-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[99];
    int c[46];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
