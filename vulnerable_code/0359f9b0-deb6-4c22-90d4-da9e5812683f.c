#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=104;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[9];
    int c[21];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
