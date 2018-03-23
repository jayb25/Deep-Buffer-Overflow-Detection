#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=44;
   int k;
   int l;
   k = 33;
   l = 64;
   k = i/j;
   l = i%j;
   l = i+j;
   k = i-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[88];
    long c[84];
    a = 0;
    while (( a - 1 ) < strlen(b)) {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
