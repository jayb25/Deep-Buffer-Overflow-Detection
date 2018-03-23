#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=1;
   int k;
   int l;
   k = 53;
   k = 64;
   k = i%j;
   l = l/j;
   l = l-j;
   l = k%j;
   l = j%j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[90];
    char c[82];
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
    
   printf("%d%d\n",k,l);
   return 0;
}
