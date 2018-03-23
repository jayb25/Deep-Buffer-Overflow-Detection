#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=11;
   int k;
   int l;
   i = 23;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j/j;
   l = k%j;
   l = j%j;
   l = i%j;
   k = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[16];
    long c[43];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
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
