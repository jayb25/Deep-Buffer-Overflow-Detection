#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = k/j;
   l = k/j;
   l = l%j;
   l = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[35];
    int c[27];
    a = 0;
    do {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(( a - 1 ) > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",i);
   return 0;
}
