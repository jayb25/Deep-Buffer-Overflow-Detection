#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=122;
   int k;
   int l;
   j = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = i%j;
   l = j-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[98];
    int c[49];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
