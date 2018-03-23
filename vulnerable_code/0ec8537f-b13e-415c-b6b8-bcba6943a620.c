#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=13;
   int k;
   int l;
   j = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = i+j;
   l = l-j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[47];
    long c[73];
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
