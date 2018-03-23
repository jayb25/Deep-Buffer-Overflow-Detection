#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 644;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l/j;
   l = l-j;
   k = l-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[38];
    long c[20];
    a = 0;
    do {
        a--;
        //random
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
