#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 53;
   k = 54;
   k = i/j;
   l = i/j;
   l = i/j;
   l = i%j;
   l = k-j*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[42];
    int c[48];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
