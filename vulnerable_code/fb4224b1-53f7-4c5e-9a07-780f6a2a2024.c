#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 533;
   k = 6;
   k = i/j;
   l = i/j;
   l = l%j;
   l = l%j;
   j = i-j*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    int b[64];
    int c[85];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          //random
          a++;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
