#include <string.h>
#include <stdio.h>
int main() {
   int i=04;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = k/j;
   l = l%j;
   l = i+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[99];
    long c[71];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
