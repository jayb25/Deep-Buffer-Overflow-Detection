#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=122;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = l/j;
   l = l+j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[66];
    int c[17];
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
    
   printf("%d%d\n",k,i);
   return 0;
}
