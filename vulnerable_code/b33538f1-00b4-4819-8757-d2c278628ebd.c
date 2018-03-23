#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i%j;
   k = l-j*j;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[91];
    long c[53];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
