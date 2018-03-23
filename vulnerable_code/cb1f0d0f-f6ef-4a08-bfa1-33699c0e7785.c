#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 54;
   k = i%j;
   l = i/j;
   l = l-j;
   l = l/j;
   l = l/j;
   l = j-j;
   k = k-k*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[60];
    long c[93];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",i,l);
   return 0;
}
