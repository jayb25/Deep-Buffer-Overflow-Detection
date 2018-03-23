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
   l = --j;
   l = j-j;
   l = l-j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[55];
    int c[9];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
