#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=62;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j/j;
   l = i-j;
   l = i-j*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[9];
    int c[72];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
