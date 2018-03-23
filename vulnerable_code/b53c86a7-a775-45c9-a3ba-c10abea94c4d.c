#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=124;
   int k;
   int l;
   k = 533;
   l = 61;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[74];
    int c[14];
    a = 0;
    while (( a - 1 ) > -1) {
        a--;
        /* START BUFFER SET */
         *((int *)c + ( a - 1 )) = *((int *)b + ( a - 1 ));
          /* END BUFFER SET */
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
