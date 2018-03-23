#include <string.h>
#include <stdio.h>
int main() {
   float i=444;
   int j=1;
   int k;
   int l;
   k = 533;
   l = 64;
   k = i/j;
   l = i-j;
   l = l/4;
   l = i/j;
   l = l-j;
   j = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    long b[57];
    long c[45];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((long *)c + a) = *((long *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
