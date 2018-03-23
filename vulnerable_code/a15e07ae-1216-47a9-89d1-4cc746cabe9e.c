#include <string.h>
#include <stdio.h>
int main() {
   int i=4;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   k = i/j;
   l = l-j;
   l = l-j;
   k = k-k*i;

    //variables
    
    /* START VULNERABILITY */
    int a;
    char b[53];
    char c[94];
    a = 0;
    while (a > -1) {
        //random
        /* START BUFFER SET */
         *((char *)c + a) = *((char *)b + a);
          /* END BUFFER SET */
          a--;
          
    }
    /* END VULNERABILITY */
    
   printf("%d%d\n",k,l);
   return 0;
}
