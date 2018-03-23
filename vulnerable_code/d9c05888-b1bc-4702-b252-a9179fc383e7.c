#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=52;
   int k;
   int l;
   i = 53;
   l = 64;
   k = i/j;
   l = i/j;
   l = l/j;
   l = l/j;
   l = k%j;
   l = i%j;
   k = l-4*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[44];
    char c[58];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          //random
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
