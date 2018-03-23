#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=444;
   int k;
   int l;
   k = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = k--*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[92];
    int c[80];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d\n",k);
   return 0;
}
