#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1424;
   int k;
   int l;
   k = 5;
   l = 64;
   k = i/j;
   k = i/j;
   l = i/j;
   l = l-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[34];
    int c[88];
    a = 0;
    do {
        a--;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
