#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   k = 55;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l%j;
   l = k%j;
   k = l-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[72];
    long c[94];
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
