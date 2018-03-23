#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 54;
   k = i/j;
   l = i/j;
   l = k/j;
   l = l%j;
   l = i%j;
   l = l+j;
   i = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[76];
    long c[83];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
