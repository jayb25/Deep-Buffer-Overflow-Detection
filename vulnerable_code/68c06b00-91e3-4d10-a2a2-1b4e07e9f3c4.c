#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=128;
   int k;
   int l;
   k = 633;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = 6-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[63];
    long c[24];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
