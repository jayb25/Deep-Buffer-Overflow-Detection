#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 44;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = j-j;
   l = j-j*k;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[48];
    long c[23];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
