#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   l = 53;
   l = 64;
   k = k/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = j-j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[37];
    int c[89];
    a = 0;
    do {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
