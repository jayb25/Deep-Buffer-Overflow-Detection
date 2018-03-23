#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=42242;
   int k;
   int l;
   k = 53;
   l = 64;
   k = j/j;
   l = i/j;
   l = l%j;
   l = j+j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[91];
    int c[6];
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
