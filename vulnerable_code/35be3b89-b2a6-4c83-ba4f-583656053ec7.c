#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=15;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = k%j;
   l = l+j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[20];
    long c[24];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((long *)c + ( a - 1 )) = *((long *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
