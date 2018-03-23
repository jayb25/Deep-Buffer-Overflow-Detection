#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = l/j;
   l = k/j;
   l = l/j;
   l = i/j;
   l = l/j;
   l = i/j;
   l = k-j;
   l = j-j;
   k = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[10];
    int c[67];
    a = 0;
    while (b[( a - 1 )] != 0) {
        a++;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          //random
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
