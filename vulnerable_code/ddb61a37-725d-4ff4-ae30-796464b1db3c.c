#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   k = 53;
   l = 64;
   l = i-j;
   l = i/j;
   l = l/j;
   l = k%j;
   l = i-j;
   l = l%j;
   l = j%j;
   k = k-k*l;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[45];
    int c[68];
    a = 0;
    do {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    } while(b[( a - 1 )] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
