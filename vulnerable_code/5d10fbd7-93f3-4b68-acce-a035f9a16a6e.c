#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=13;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   k = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[79];
    int c[11];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
