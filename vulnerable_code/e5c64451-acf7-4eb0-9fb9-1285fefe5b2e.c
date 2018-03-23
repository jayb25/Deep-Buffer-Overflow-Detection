#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=14;
   int k;
   int l;
   l = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l%j;
   l = l%j;
   j = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[42];
    long c[91];
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
