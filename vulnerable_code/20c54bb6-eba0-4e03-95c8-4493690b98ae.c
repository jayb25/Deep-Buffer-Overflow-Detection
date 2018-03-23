#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=14;
   int k;
   int l;
   i = 533;
   l = 65;
   k = i/j;
   l = i/j;
   l = i/j;
   l = l%j;
   l = l+j;
   k = --k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[57];
    int c[23];
    a = 0;
    while (a < strlen(b)) {
        //random
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
