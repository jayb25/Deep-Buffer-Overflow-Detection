#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=110;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = 3/j;
   l = i/j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[28];
    long c[49];
    a = 0;
    while (a < strlen(b)) {
        //random
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
