#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1442;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = l+j;
   k = k-k*i;
   k = i%j;
   l = j-j;
   l = j-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[67];
    int c[41];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
