#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=42;
   int k;
   int l;
   k = 583;
   l = 64;
   k = i/j;
   l = i/j;
   l = k%j;
   l = l+j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[11];
    char c[35];
    a = 0;
    while (a > -1) {
        //random
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
