#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1442;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k/j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[11];
    long c[29];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%dd\n",k,l);
   return 0;
}
