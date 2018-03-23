#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=122;
   int k;
   int l;
   j = 13;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = j%j;
   l = l+j;
   k = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[42];
    int c[55];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
