#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1322;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = j%j;
   l = l%j;
   k = k-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[19];
    int c[61];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d\n",l);
   return 0;
}
