#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   i = 53;
   k = 64;
   k = i/j;
   l = l/j;
   l = i/j;
   l = l%j;
   l = l%j;
   l = k-4*i;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    int b[46];
    int c[11];
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
    
   printf("%d\n",l);
   return 0;
}
