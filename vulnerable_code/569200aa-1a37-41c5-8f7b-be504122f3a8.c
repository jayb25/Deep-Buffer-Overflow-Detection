#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=1228;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k-j;
   l = i-j;
   l = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[55];
    int c[21];
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
