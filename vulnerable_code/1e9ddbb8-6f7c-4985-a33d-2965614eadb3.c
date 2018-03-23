#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=348;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = l%j;
   l = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[76];
    long c[80];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) < strlen(b));
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
