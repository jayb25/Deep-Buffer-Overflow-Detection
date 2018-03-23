#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 534;
   l = 64;
   k = i-j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = l-i;
   l = l-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[75];
    long c[42];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",l);
   return 0;
}
