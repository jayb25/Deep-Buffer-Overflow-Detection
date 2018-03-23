#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 533;
   k = 64;
   k = i-j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k-j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[27];
    long c[99];
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
