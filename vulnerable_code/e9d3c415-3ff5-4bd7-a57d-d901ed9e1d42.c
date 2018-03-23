#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=112;
   int k;
   int l;
   i = 53;
   l = 64;
   k = k+j;
   l = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = l-j;
   l = j-j;
   k = i-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[13];
    long c[11];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
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
