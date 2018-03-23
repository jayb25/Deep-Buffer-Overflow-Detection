#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=22;
   int k;
   int l;
   j = 53;
   l = 64;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = l%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[72];
    int c[34];
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
