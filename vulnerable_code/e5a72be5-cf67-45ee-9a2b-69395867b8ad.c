#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   i = 53;
   l = 64;
   l = i/j;
   l = l/j;
   l = i%j;
   l = i+j;
   k = j-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[84];
    long c[58];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
