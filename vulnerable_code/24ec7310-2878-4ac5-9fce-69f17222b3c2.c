#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=32;
   int k;
   int l;
   k = 534;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[64];
    long c[95];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
