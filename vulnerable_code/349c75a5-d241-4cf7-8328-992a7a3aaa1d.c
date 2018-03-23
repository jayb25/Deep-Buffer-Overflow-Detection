#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   j = 53;
   l = 63;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l%j;
   l = j-j*j;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[86];
    int c[85];
    a = 0;
    while (a < strlen(b)) {
        /* START BUFFER SET */
         *((int *)c + a) = *((int *)b + a);
          /* END BUFFER SET */
          a++;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
