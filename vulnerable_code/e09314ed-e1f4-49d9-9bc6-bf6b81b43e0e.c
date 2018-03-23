#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=1;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = k%j;
   l = i/j;
   k = k-k*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[5];
    char c[60];
    a = 0;
    while (a > -1) {
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    //random
    
   printf("%d%d\n",k,l);
   return 0;
}
