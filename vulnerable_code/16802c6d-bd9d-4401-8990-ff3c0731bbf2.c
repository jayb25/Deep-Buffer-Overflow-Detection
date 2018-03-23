#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=18;
   int k;
   int l;
   j = 53;
   l = 66;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l/j;
   l = l-j;
   l = l-j;
   l = k-k*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[17];
    long c[65];
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
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
