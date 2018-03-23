#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   j = 531;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l-j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[94];
    long c[26];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
