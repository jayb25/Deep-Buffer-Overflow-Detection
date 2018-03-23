#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=121;
   int k;
   int l;
   k = 53;
   l = 6;
   k = i/j;
   l = i/j;
   l = j/j;
   l = l+j;
   l = l%j;
   j = l-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[63];
    long c[95];
    a = 0;
    while (b[a] != 0) {
        //random
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
