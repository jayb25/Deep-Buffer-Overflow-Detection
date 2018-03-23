#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 533;
   l = 64;
   k = i/j;
   l = i/j;
   l = j/j;
   l = k%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[87];
    int c[80];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        //random
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
