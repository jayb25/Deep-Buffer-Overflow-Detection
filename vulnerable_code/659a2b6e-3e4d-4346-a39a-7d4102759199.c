#include <string.h>
#include <stdio.h>
int main() {
   int i=44;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = k/j;
   l = k-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[77];
    long c[46];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,i);
   return 0;
}
