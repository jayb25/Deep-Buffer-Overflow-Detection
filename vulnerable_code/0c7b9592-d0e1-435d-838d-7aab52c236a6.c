#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=62;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = i-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[59];
    long c[49];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
