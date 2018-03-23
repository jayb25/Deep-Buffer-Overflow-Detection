#include <string.h>
#include <stdio.h>
int main() {
   int i=0;
   int j=12;
   int k;
   int l;
   k = 53;
   l = 64;
   k = i/j;
   l = l/j;
   l = j/j;
   l = k/j;
   l = l-j;
   l = i-j;
   l = l-j;
   l = k/j;
   k = k-j*k;

    //variables
    //random
    
    /* START VULNERABILITY */
    int a;
    char b[93];
    char c[44];
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
