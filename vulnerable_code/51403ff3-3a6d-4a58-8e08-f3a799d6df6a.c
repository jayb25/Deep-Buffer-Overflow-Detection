#include <string.h>
#include <stdio.h>
int main() {
   float i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 94;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l-j;
   l = k-j*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    long b[74];
    long c[28];
    a = 0;
    do {
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    } while(b[a] != 0);
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
