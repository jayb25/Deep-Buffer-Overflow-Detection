#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1222;
   int k;
   int l;
   l = 538;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = k%j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[89];
    int c[98];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
