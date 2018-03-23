#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=142;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = i-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[42];
    int c[48];
    a = 0;
    while (b[a] != 0) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
