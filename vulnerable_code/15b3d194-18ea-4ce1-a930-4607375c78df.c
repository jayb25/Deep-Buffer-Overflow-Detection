#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=414;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l+j;
   l = i-j;
   k = 6-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[81];
    long c[59];
    a = 0;
    while (b[a] != 0) {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,i);
   return 0;
}
