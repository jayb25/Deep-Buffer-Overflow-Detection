#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=132;
   int k;
   int l;
   i = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k/j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[72];
    long c[69];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
