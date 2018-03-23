#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 534;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   l = j-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[26];
    long c[14];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
