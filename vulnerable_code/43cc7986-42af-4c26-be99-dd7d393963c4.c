#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=13;
   int k;
   int l;
   j = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = k%j;
   l = l-j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[78];
    long c[66];
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
