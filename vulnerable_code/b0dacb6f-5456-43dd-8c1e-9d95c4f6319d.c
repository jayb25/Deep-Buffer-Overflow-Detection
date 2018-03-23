#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=112;
   int k;
   int l;
   j = 53;
   k = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = j%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[61];
    long c[86];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
