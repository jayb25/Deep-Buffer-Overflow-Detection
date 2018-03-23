#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1222;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i-j;
   l = j%j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[98];
    long c[40];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
