#include <string.h>
#include <stdio.h>
int main() {
   int i=40;
   int j=324;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = -k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[30];
    long c[88];
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
