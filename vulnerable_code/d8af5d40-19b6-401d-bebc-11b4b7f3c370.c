#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=11;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i/j;
   l = i/j;
   l = l/j;
   l = i%j;
   l = j-j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[65];
    long c[48];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
