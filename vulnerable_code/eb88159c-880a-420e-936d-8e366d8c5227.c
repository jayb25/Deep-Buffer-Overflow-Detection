#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=141;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = i%j;
   l = l/j;
   l = i%j;
   l = l/j;
   k = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[98];
    int c[13];
    a = 0;
    do {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    } while(a > -1);
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
