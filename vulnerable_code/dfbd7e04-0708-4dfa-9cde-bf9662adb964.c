#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = i/j;
   l = k/j;
   l = l-j;
   l = l-j;
   k = l-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[76];
    long c[44];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
