#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=41;
   int k;
   int l;
   j = 53;
   l = 644;
   k = l/j;
   l = i/j;
   l = i%j;
   l = l%j;
   l = j/j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[50];
    long c[74];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
