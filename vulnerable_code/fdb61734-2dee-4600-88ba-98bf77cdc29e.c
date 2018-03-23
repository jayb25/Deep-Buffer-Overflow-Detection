#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/4;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l%j;
   k = 6-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[79];
    long c[6];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
